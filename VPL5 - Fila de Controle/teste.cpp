#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "priority_queue.hpp"

TEST_CASE("PriorityQueue tamanho aumenta após enqueue"){
    IntPriorityQueue pq;
    REQUIRE_EQ(pq.size(), 0);
    pq.enqueue(1,2);
    CHECK_EQ(pq.size(), 1);
}