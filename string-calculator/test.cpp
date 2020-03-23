#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "calculator.hpp"

TEST_CASE("empty string returns 0")
{
	INFO( "Empty string did not return zero");
	REQUIRE(0 == calculate(""));
}

