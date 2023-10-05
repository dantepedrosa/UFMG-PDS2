#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "priority_queue.hpp"

TEST_CASE("PriorityQueue tamanho aumenta após enqueue"){
    IntPriorityQueue pq;
    REQUIRE_EQ(pq.size(), 0);
    pq.enqueue(1,2);
    CHECK_EQ(pq.size(), 1);
}

TEST_CASE("Testa colocar três itens na fila"){
    IntPriorityQueue pq;
    pq.enqueue(72, 2);
    pq.enqueue(97, 4);
    pq.enqueue(43, 9);
    CHECK_EQ(pq.peek(), 43);
}

TEST_CASE("Tenta colocar dois itens iguais"){
    IntPriorityQueue pq;
    pq.enqueue(72, 2);
    pq.enqueue(97, 4);
    pq.enqueue(43, 2);
    CHECK_EQ(pq.peek(), 97);
}

TEST_CASE("Testa remover item do final da fila"){
    IntPriorityQueue pq;
    pq.enqueue(2, 5);
    REQUIRE_EQ(pq.size(), 1);
    pq.enqueue(3, 7);
    REQUIRE_EQ(pq.size(), 2);
    pq.enqueue(5, 3);
    CHECK_EQ(pq.size(), 3);
    pq.dequeue();
    CHECK_EQ(pq.peek(), 2);
    
}