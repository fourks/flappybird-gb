PNG2GB = /usr/local/bin/png2gb
IMG_DIR = img

all-img: background.c sprites.c

background.c: 
	$(PNG2GB) $(IMG_DIR)/bg.png $(IMG_DIR)/ground.png $(IMG_DIR)/flappybird.png --map -o $(IMG_DIR)/$@

sprites.c:
	$(PNG2GB) $(IMG_DIR)/bird.png $(IMG_DIR)/pipe.png $(IMG_DIR)/numbers.png -p 1023 -o $(IMG_DIR)/$@

clean-img: 
	rm *.c