CC=gcc
CFLAGS=-g -Wall

all: $(patsubst src/%.c, cbin/%.out, $(wildcard src/*.c))

cbin/%.out: src/%.c Makefile
	$(CC) $(CFLAGS) $< -o $@ -lm

clean:
	rm cbin/*.out
