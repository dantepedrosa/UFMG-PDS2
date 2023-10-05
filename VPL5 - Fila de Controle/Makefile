# O compilador que vamos utilizar
CC = g++
# Algumas flags de compilação
CFLAGS = -Wall -g
# Flags de inclusão de cabeçalho
main: teste.o priority_queue.o
	$(CC) $(CFLAGS) -o main teste.o priority_queue.o

main.o: teste.cpp priority_queue.hpp
	$(CC) $(CFLAGS) -c teste.cpp

priorityQueue.o: priority_queue.hpp
