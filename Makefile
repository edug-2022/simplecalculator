CC = gcc
CFLAGS = -I./lib

SRC = main.c lib/menu.c lib/core.c lib/operations.c
OUT = ./out/calc

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) && $(OUT)
build:
	$(CC) $(CFLAGS) $(SRC) -o $OUT
run:
	$(OUT)
clean:
	rm -f $(OUT)