# O compilador que vamos utilizar
CC = g++
# Algumas flags de compilação
CFLAGS = -Wall -g
# Flags de inclusão de cabeçalho
main: teste.o fixed_set.o
	$(CC) $(CFLAGS) -o main teste.o fixed_set.o

main.o: teste.cpp fixed_set.hpp
	$(CC) $(CFLAGS) -c teste.cpp

priorityQueue.o: fixed_set.hpp
