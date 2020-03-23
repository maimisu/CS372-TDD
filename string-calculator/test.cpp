// test.cpp
// Malvika Shriwas
// CS372 string calc TDD
// Time allotted: 45 minutes

#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "calculator.hpp"

TEST_CASE("empty string returns 0")
{
	INFO( "Empty string did not return zero");
	REQUIRE(0 == calculate(""));
}

TEST_CASE("A single number returns the value")
{
	INFO("Single number did not return the value");
	REQUIRE(2 == calculate(2));
}

TEST_CASE("Two numbers, comma delimited, returns the sum")
{
	INFO("Two numbers, comma delimited, did not return the sum");
	REQUIRE(5 == calculate("2, 3"));
}

/*  NOT FINISHED
TEST_CASE("Two numbers, newline delimited, returns the sum")
{
	INFO("Two numbers, newline delimited, did not return the sum");
	REQUIRE();
}
*/
