PROJ_NAME=conversor
OBJ=$(C_SRC:.c=.o)
CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
C_SRC=$(wildcard *.c)
H_SRC=$(wildcard *.h)

$(PROJ_NAME): $(OBJ)
	$(CC) -o $@ $^ -lm

clean:
	rm -rf *.o $(PROJ_NAME)