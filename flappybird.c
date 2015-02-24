//
//  flappybird.c
//
//  Created by Lucas Duroj on 14/07/14.
//  Copyright (c) 2014 Lucas Duroj. All rights reserved.
//

#include <gb/gb.h>
#include <rand.h>

//img
#include "img/background.c"
#include "img/sprites.c"

//Iterators
UINT8 x, y, i;
UINT8 x1, x2;
UINT8 joy;

//Bird
UINT8 bird_x;
UINT8 bird_y;
UINT8 bird_frame;
UINT8 bird_frame_skip;

fixed bird_gravity;

typedef enum _SpriteLayout {
	BIRD_SPACE = 0,
	PIPE_SPACE = 2,
	SCORE_SPACE = 2+21,
} SpriteLayout;

//Game
typedef enum _GameStart {
	GAME_STATE_INTRO = 0,
	GAME_STATE_GAME = 1,
	GAME_STATE_DEAD = 2,
} GameState;
GameState gameState = GAME_STATE_INTRO;
UINT8 score;

//Pipe
typedef struct _Pipe {
	UINT8 x;
	UINT8 gap;
	UINT8 size;
	
	UINT8 top_y;
	UINT8 bottom_y;
	
	BOOLEAN counted;
} Pipe;

Pipe pipe;

// Bird Logic

void moveBird() {
	move_sprite(0, bird_x, bird_y);
	move_sprite(1, bird_x+8, bird_y);
}

void setupBird() {
	set_sprite_tile(0, bird_offset);
	set_sprite_tile(1, bird_offset+2);
	
	set_sprite_prop(0, 0x00);
	set_sprite_prop(1, 0x00);
}

#define BIRD_GRAVITY_FORCE 35
BOOLEAN bird_flag;
UINT8 updateBird() {
	
	bird_gravity.w += BIRD_GRAVITY_FORCE;
	bird_y += bird_gravity.b.h;
	
	if(joy & J_A) {
		if(bird_flag) {
			bird_gravity.b.h -= 4;
			bird_flag = FALSE;
		}
	} else {
		bird_flag = TRUE;
	}
	
	if(bird_y > 120 && bird_y < 250) {
		bird_flag = FALSE;
		if(bird_y > 121)//only reset force in the sky
			bird_gravity.w = 0;
		return 1; //Die
	}
	
	//Hit test pipe
	if(!(pipe.x+24 < bird_x) && !(pipe.x > bird_x+16)) {// check front and back
		if(pipe.top_y > bird_y) {//check top
			bird_gravity.w = 0;
			return 1;
		} else if(pipe.bottom_y < bird_y) {
			bird_gravity.w = 0;
			return 1;
		}
	}
	
	// Animate
	++bird_frame_skip;
	if(bird_frame_skip > 4) {
		bird_frame_skip = 0;
		
		++bird_frame;
		bird_frame %= 3;
		
		set_sprite_tile(0, bird_offset+(bird_frame*4));
		set_sprite_tile(1, bird_offset+(bird_frame*4)+2);
	}
	
	return 0;
}

void updateDeadBird() {
	
	if(!bird_flag) {
		bird_gravity.w += BIRD_GRAVITY_FORCE;
		bird_y += bird_gravity.b.h;
		
		if(bird_y >= 124 && bird_y < 210) {
			bird_y = 124;
			bird_flag = TRUE;
		}
	} else {
		++bird_frame_skip;
		if(bird_frame_skip >= 30) {
			resetGame();
		}
	}
	
	moveBird();
}

//Score logic

void updateScore() {
	i = SCORE_SPACE;
	
	if(score >= 10) {
		
		x1 = score/10;
		x2 = x1*4;
		set_sprite_tile(i, numbers_offset+(x2));
		set_sprite_tile(i+1, numbers_offset+(x2+2));
		move_sprite(i, 72, 30);
		move_sprite(i+1, 72+8, 30);
		
		x1 *= 10;
		x2 = score-x1;
		x2 *= 4;
		set_sprite_tile(i+2, numbers_offset+(x2));
		set_sprite_tile(i+3, numbers_offset+(x2+2));
		move_sprite(i+2, 72+16, 30);
		move_sprite(i+3, 72+16+8, 30);
		
		
	} else {
		x1 = score*4;
		set_sprite_tile(i, numbers_offset+(x1));
		set_sprite_tile(i+1, numbers_offset+(x1+2));
		move_sprite(i, 80, 30);
		move_sprite(i+1, 80+8, 30);
		
		move_sprite(i+2, 0, 0);
		move_sprite(i+3, 0, 0);
	}
}

void hideScore() {
	i = SCORE_SPACE;
	
	move_sprite(i, 0, 0);
	move_sprite(++i, 0, 0);
	
	move_sprite(++i, 0, 0);
	move_sprite(++i, 0, 0);
}

void showLogo() {
	char* p = flappybird_map;
	
	set_bkg_data(0, background_tileset_size, background_tileset);
	for (y = 2; y < flappybird_map_height+2; ++y ) {
		set_bkg_tiles(4, y, flappybird_map_width, 1, p);
		p += flappybird_map_width;
	}
}

void hideLogo() {
	char* p = bg_map;
	set_bkg_data(0, background_tileset_size, background_tileset);
	for (y = 2; y < flappybird_map_height+2; ++y ) {
		set_bkg_tiles(4, y, flappybird_map_width, 1, p);
		p += flappybird_map_width;
	}
}

// Pipe Logic

void initPipe() {
	//Setup
	i = PIPE_SPACE;
	pipe.x = 160;
	if(score < 5) {
		pipe.size = 5;
	} else if(score < 15) {
		pipe.size = 4;
	} else if(score < 40) {
		pipe.size = 3;
	} else  {
		pipe.size = 2;
	}
	pipe.gap = 1+(randw()%(7-pipe.size));
	
	pipe.top_y = (pipe.gap*16)+8;
	pipe.bottom_y = ((pipe.gap+pipe.size)*16)-8;
	
	pipe.counted = FALSE;
	
	//Top part
	for (y = 0; y < pipe.gap-1; y++) {
		set_sprite_tile(i, pipe_offset+2);
		set_sprite_tile(i+1, pipe_offset+6);
		set_sprite_tile(i+2, pipe_offset+10);
		
		set_sprite_prop(i, 0x00);
		set_sprite_prop(i+1, 0x00);
		set_sprite_prop(i+2, 0x00);
		
		i += 3;
	}
	
	//Top stop
	set_sprite_tile(i, pipe_offset);
	set_sprite_tile(i+1, pipe_offset+4);
	set_sprite_tile(i+2, pipe_offset+8);
	
	set_sprite_prop(i, S_FLIPY);
	set_sprite_prop(i+1, S_FLIPY);
	set_sprite_prop(i+2, S_FLIPY);
	
	i += 3;
	
	//Gap
	
	//Bottom stop
	set_sprite_tile(i, pipe_offset);
	set_sprite_tile(i+1, pipe_offset+4);
	set_sprite_tile(i+2, pipe_offset+8);
	
	set_sprite_prop(i, 0x00);
	set_sprite_prop(i+1, 0x00);
	set_sprite_prop(i+2, 0x00);
	i += 3;
	
	//Bottom part
	y += pipe.size+1;
	for (y; y < 7; y++) {
		set_sprite_tile(i, pipe_offset+2);
		set_sprite_tile(i+1, pipe_offset+6);
		set_sprite_tile(i+2, pipe_offset+10);
		
		set_sprite_prop(i, 0x00);
		set_sprite_prop(i+1, 0x00);
		set_sprite_prop(i+2, 0x00);
		i += 3;
	}
}

void movePipe() {
	
	//Setup
	i = PIPE_SPACE-1;
	x = -8;
	
	x1 = pipe.x+8;
	x2 = pipe.x+16;
	
	//Top part
	for (y = 0; y < pipe.gap-1; y++) {
		x += 16;
		move_sprite(++i, pipe.x, x);
		move_sprite(++i, x1, x);
		move_sprite(++i, x2, x);
	}
	
	//Top stop
	x += 16;
	move_sprite(++i, pipe.x, x);
	move_sprite(++i, x1, x);
	move_sprite(++i, x2, x);
	
	//Gap
	x += 16;
	x += pipe.size*16;
	
	//Bottom stop
	move_sprite(++i, pipe.x, x);
	move_sprite(++i, x1, x);
	move_sprite(++i, x2, x);
	
	y += pipe.size+1;
	
	//Bottom part
	for (y; y < 7; y++) {
		x += 16;
		move_sprite(++i, pipe.x, x);
		move_sprite(++i, x1, x);
		move_sprite(++i, x2, x);
	}
}

void hidePipe() {
	for(i = PIPE_SPACE; i < PIPE_SPACE+21; ++i)
		move_sprite(i, 0, 0);
}

// Loop logic

UINT8 flash_frames;
void introLoop() {
	if(joy != 0) {
		//Start Game
		bird_x = 40;
		bird_y = 60;
		initPipe();
		hideLogo();
		updateScore();
		gameState = GAME_STATE_GAME;
	}
}

void gameLoop() {
	
	--pipe.x;
	if(pipe.x < 232 && pipe.x > 160) {
		initPipe();
	}
	movePipe();
	
	//Scroll ground
	if(WX_REG == 0)
		WX_REG = 7;
	else
		--WX_REG;
	
	if(updateBird() != 0) {
		//Kill bird
		flash_frames = 0;
		bird_flag = FALSE;
		
		set_sprite_prop(0, S_FLIPY);
		set_sprite_prop(1, S_FLIPY);
		
		gameState = GAME_STATE_DEAD;
	}
	
	if(!pipe.counted && pipe.x+24 < bird_x) {
		pipe.counted = TRUE;
		if(score != 99) {
			++score;
			updateScore();
		}
	}
	
	moveBird();
}

void deadLoop() {
	
	flash_frames++;
	if(flash_frames < 20 && flash_frames%4 == 0) {
		if(BGP_REG != 0x00)
			BGP_REG = 0x00;
		else
			BGP_REG = 0xE4;
	}
	
	updateDeadBird();
}


void resetGame() {
	bird_flag = FALSE;
	bird_gravity.w = 0;
	
	showLogo();
	
	gameState = GAME_STATE_INTRO;
	score = 0;
	hideScore();
	
	hidePipe();
	
	set_sprite_prop(0, 0x00);
	set_sprite_prop(1, 0x00);
	
	bird_x = 0;
	bird_y = 0;
}

UINT16 rand_seed;
int main (void) {
	char* p = bg_map;
	
	//Setup rand
	rand_seed = DIV_REG;
	
	//Turn off
	disable_interrupts();
	DISPLAY_OFF;
	
	//Setup LCD
	SHOW_BKG;
	SHOW_SPRITES;
	SHOW_WIN;
	
	//Load bg
	BGP_REG = OBP1_REG = 0xE4;
	OBP0_REG = 0xE1;
	
	set_bkg_data(0, background_tileset_size, background_tileset);
	for (y = 0; y < bg_map_height; ++y ) {
		set_bkg_tiles(0, y, bg_map_width, 1, p);
		p += bg_map_width;
	}
	
	//Load window
	x = 0;
	for (i = 0; i < 21; ++i ) {
		set_win_tiles(x, 0, ground_map_width, ground_map_height, ground_map);
		x += ground_map_width;
	}
	WX_REG = 0;
	WY_REG = 120;
	
	//Load Sprite
	
	set_sprite_data(0, sprites_size, sprites_data);
	SPRITES_8x16;
	
	//Load Bird
	
	setupBird();
	
	//Reset
	resetGame();
	
	//Turn on display
	DISPLAY_ON;
	enable_interrupts();
	
	//Finish rand
	rand_seed |= DIV_REG << 8;
	initarand(rand_seed);
	
	//RunLoop
	while (1) {
		joy = joypad();
		wait_vbl_done();
		
		switch (gameState) {
			case GAME_STATE_INTRO: {
				introLoop();
			}
				break;
			case GAME_STATE_GAME: {
				gameLoop();
			}
				break;
			case GAME_STATE_DEAD: {
				deadLoop();
			}
				break;
		}
	}
	
	return 0;
}