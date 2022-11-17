#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do
                           // this in one cpp file
#include "catch.hpp"

extern "C" {
#include "fib.h"
#include "sum.h"
#include "sumn.h"
}

// See Catch2's documentation:
// https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail") {
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(sumtail(1, 0) == 1);
    REQUIRE(sumtail(7, 0) == 28);
    REQUIRE(sumtail(27, 0) == 378);
}

TEST_CASE("sumwhile") {
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(sumtail(1, 0) == 1);
    REQUIRE(sumtail(7, 0) == 28);
    REQUIRE(sumtail(27, 0) == 378);
}

TEST_CASE("sumn") {
    REQUIRE(sumn(1) == 1);      // sum(1) must be 1
    REQUIRE(sumn(3) == 9);      // sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33) == 1089);  // sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib") {
    // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(fib(1, 1, 1) == 1);
    REQUIRE(fib(7, 1, 1) == 13);
    REQUIRE(fib(10, 1, 1) == 55);
    REQUIRE(fib(13, 1, 1) == 233);
}
