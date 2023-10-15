# O compilador que vamos utilizar
CC = g++
# Algumas flags de compilação
CFLAGS = -Wall -g
# Flags de inclusão de cabeçalho
main: test.o course.o allocation.o alloc_board.o
	$(CC) $(CFLAGS) -o main test.o course.o allocation.o alloc_board.o

main.o: test.cpp course.hpp allocation.hpp alloc_board.hpp
	$(CC) $(CFLAGS) -c test.cpp
