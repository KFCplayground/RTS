PROGRAM = rts
C_FILES := $(wildcard *.c)
CC = cc
CFLAGS = -Wall -pedantic
LDFLAGS = 
LDLIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

build: main.c
	$(CC) $(CFLAGS) main.c -o rts $(LDLIBS) 

clean: rts
	$(RM) rts rts.o
