CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/cli.c src/objectfile.c
OBJ = $(SRC:.c=.o)

shit: $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $(SRC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
