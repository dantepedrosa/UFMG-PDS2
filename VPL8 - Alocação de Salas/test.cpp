#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest.h"
#include "allocation.hpp"
#include "alloc_board.hpp"
#include "course.hpp"

TEST_CASE("Testa comparação de dois cursos"){
    Course pds2 = {"DCC123", "PDS2"};
    Course gaal = {"MAT111", "GAAL"};
    Course pds = {"DCC123", "PDS"};
    CHECK_FALSE(pds2 == gaal);
    CHECK(pds == pds2);
}

TEST_CASE("Testa comparação de alocações '=='"){
    Allocation a1("Segunda", "13:00", "208");
    Allocation a2("Segunda", "14:40", "208");
    Allocation a3("Segunda", "14:40", "208");
    CHECK_FALSE(a1 == a2);
    CHECK(a2 == a3);
}

TEST_CASE("Testa comparação de alocações '<'"){
    
    Allocation a1 = {"Ter-Qui", "14:55-16:35", "3015"};
    Allocation a2 = {"Ter-Qui", "07:30-09:10", "3015"};
    CHECK(a2 < a1);
}

/*
TEST_CASE("Teste 1"){
    AllocBoard board;
    Course pds2 = {"DCC123", "PDS2"};
    Allocation a0 = {"Ter-Qui", "14:55-16:35", "3040"};
    CHECK(board.allocate(pds2, a0));
    Course gaal = {"MAT111", "GAAL"};
    Allocation a1 = {"Ter-Qui", "14:55-16:35", "3015"};
    Allocation a2 = {"Ter-Qui", "07:30-09:10", "3015"};
    CHECK(board.allocate(gaal, a1));
    CHECK(board.allocate(gaal, a2));

    std::vector<Allocation> pds2_allocs = board.find_allocations(pds2.id);
    CHECK_EQ(pds2_allocs.size(), 1);
    CHECK_EQ(pds2_allocs[0], a0);

    std::vector<Allocation> gaal_allocs = board.find_allocations(gaal.id);
    CHECK_EQ(gaal_allocs.size(), 2);
    CHECK_EQ(gaal_allocs[0], a2);
    CHECK_EQ(gaal_allocs[1], a1);
}
*/