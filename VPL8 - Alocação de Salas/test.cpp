#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest.h"
#include "allocation.hpp"
#include "alloc_board.hpp"
#include "course.hpp"

TEST_CASE("Testa comparação de dois cursos idênticos"){
    Course c1("MAT039", "CALCULO DIFERENCIAL E INTEGRAL II");
    Course c2("DCC204", "PROGRAMAÇÃO E DESENVOLVIMENTO DE SOFTWARE II");
    Course c3("DCC204", "PROGRAMAÇÃO E DESENVOLVIMENTO DE SOFTWARE II");
    CHECK_FALSE(c1 == c2);
    CHECK(c2 == c3);
}

TEST_CASE("Testa comparação de dois cursos com nomes e codigos diferentes"){
    Course c1("DCC203", "PROGRAMAÇÃO E DESENVOLVIMENTO DE SOFTWARE I");
    Course c2("DCC204", "PROGRAMAÇÃO E DESENVOLVIMENTO DE SOFTWARE I");
    Course c3("DCC204", "PROGRAMAÇÃO E DESENVOLVIMENTO DE SOFTWARE II");
    CHECK_FALSE(c1 == c2);
    CHECK(c2 == c3);
}

TEST_CASE("Testa comparação de alocações '=='"){
    Allocation a1("Segunda", "13:00", "208");
    Allocation a2("Segunda", "14:40", "208");
    Allocation a3("Segunda", "14:40", "208");
    CHECK_FALSE(a1 == a2);
    CHECK(a2 == a3);
}

TEST_CASE("Testa comparação de alocações '<'"){
    /// TODO - Teste comparação alocações '<' 
}