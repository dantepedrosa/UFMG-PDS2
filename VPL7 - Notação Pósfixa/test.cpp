#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest.h"
#include "expression.hpp"

TEST_CASE("Testa soma simples"){
    Expression e("2 3 +");
    CHECK_EQ(e.eval(), 5);
}

TEST_CASE("Testa subtração simples"){
    Expression e0("3 2 -");
    Expression e1("2 3 -");
    CHECK_EQ(e0.eval(), 1);
    CHECK_EQ(e1.eval(), -1);
}

TEST_CASE("Testa multiplicação simples"){
    Expression e0("6 2 *");
    Expression e1("2 6 *");
    CHECK_EQ(e0.eval(), 12);
    CHECK_EQ(e1.eval(), 12);
}

TEST_CASE("Testa divisão simples"){
    Expression e0("6 3 /");
    Expression e1("3 6 /");
    CHECK_EQ(e0.eval(), 2);
    CHECK_EQ(e1.eval(), 0.5);
}

TEST_CASE("Testa expressão simples"){
    Expression e0("3 2 5 + * 4 *");
    CHECK_EQ(e0.eval(), 84);
}