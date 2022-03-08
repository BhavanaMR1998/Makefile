

all: my_exe

my_exe:	main.o add.o sub.o mul.o div.o
	gcc -o my_exe main.o add.o sub.o mul.o div.o

main.o:	main.c main.h
	gcc -c main.c

add.o:	add.c main.h
	gcc -c add.c

sub.o:	sub.c main.h
	gcc -c sub.c

mul.o:	mul.c main.h
	gcc -c mul.c

div.o:	div.c main.h
	gcc -c div.c



