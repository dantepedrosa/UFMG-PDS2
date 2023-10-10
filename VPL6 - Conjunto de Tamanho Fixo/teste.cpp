#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define BIT_SET

#include "../doctest.h"
#include "fixed_set.hpp"



TEST_CASE("Ex. 1 - Inserção de 2 números"){
    Set s(10);
    s.insert(5);
    CHECK(s.contains(5));
    CHECK_FALSE(s.contains(8));
}

TEST_CASE("Ex. 1 - Remoção de números"){
    Set s(10);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    REQUIRE(s.contains(5));
    REQUIRE(s.contains(7));
    REQUIRE(s.contains(9));
    s.remove(7);
    CHECK_FALSE(s.contains(7));
}

TEST_CASE("Ex. 2 - Inserção de números"){
    
    Set s(10);
    s.insert(4);
    CHECK(s.contains(4));
    CHECK_FALSE(s.contains(1));
    CHECK_FALSE(s.contains(5));
    CHECK_FALSE(s.contains(8));

}

TEST_CASE("Ex. 2 - Remoção de números"){

    Set set(3);
    set.insert(0);
    set.insert(1);
    set.insert(2);
    REQUIRE(set.contains(0));
    REQUIRE(set.contains(1));
    REQUIRE(set.contains(2));
    set.remove(2);
    CHECK(set.contains(0));
    CHECK(set.contains(1));
    CHECK_FALSE(set.contains(2));
}