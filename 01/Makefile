all: conversor

conversor: main.o funcoes.o
	gcc -o conversor main.o funcoes.o

main.o: main.c funcoes.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

funcoes.o: funcoes.c funcoes.h
	gcc -o funcoes.o funcoes.c -c -W -Wall -ansi -pedantic

clean: 
	rm -rf *.o conversor