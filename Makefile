CC := gcc
#CFLAGS := 
DEST := ./build/

all: string2.c
	mkdir -p build
	$(CC) string2.c -lcs50 -o $(DEST)/string2 