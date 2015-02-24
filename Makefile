include img/Makefile

CC	= /opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j
BUILD_DIR = build/


all: all-img flappybird.gb

%.o:	%.c
	$(CC) -c -o $@ $<

%.s:	%.c
	$(CC) -S -o $@ $<

%.o:	%.s
	$(CC) -c -o $@ $<

%.gb:	%.o
	$(CC) -o $@ $<

clean:
	rm -f *.o *.lst *.map *.gb *~ *.rel *.cdb *.ihx *.lnk *.sym *.asm