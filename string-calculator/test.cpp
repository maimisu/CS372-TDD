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

