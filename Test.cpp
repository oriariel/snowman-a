//
// Created by ori on 09/03/2021.
//
#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
using namespace std;
#include <string>
#include <algorithm>

//string nospaces(string input) {
//    std::erase(input, ' ');
//    std::erase(input, '\t');
//    std::erase(input, '\n');
//    std::erase(input, '\r');
//    return input;
//}
TEST_CASE("Good snowman code"){
    CHECK((snowman(11114411)) == ("_===_\n(.,.)\n( : )\n( : )"));
    CHECK((snowman(11331233)) == ("_===_\n(O,O)/\n<(> <)\n( ___ )"));
    CHECK((snowman(11321222)) == ("_===_\n(O,o)/\n<(] [)\n(" ") "));
    CHECK(snowman(12222212) == ("_===_\n(o.o)\n\\( : )/\n(" ")"));
    CHECK(snowman(32443333) == ("_/_\\\n\\(-.-)/\n(> <)\n(___)"));
    CHECK((snowman(11111111)) == (" _===_\n (.,.) \n<( : )>\n ( : )\n"));
            CHECK(snowman(33333333) == "   _   \n  /_\\ \n (O_O) \n/(> <)\\\n (___) \n");
            CHECK(snowman(44444444) == "  ___  \n (_*_) \n (- -) \n (   ) \n (   ) \n");
}
    TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(4567));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(-123));
    CHECK_THROWS(snowman(234567));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(22202222));
    CHECK_THROWS(snowman(12245321));
    CHECK_THROWS(snowman(12243021));
    CHECK_THROWS(snowman(12243291));
    CHECK_THROWS(snowman(12243248));
    CHECK_THROWS(snowman(1233341241));
    CHECK_THROWS(snowman(1324154121));
    CHECK_THROWS(snowman(1233351241));
    CHECK_THROWS(snowman(1324154101));
}


