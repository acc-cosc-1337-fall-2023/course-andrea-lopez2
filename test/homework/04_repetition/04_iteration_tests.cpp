#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify the factorial of num") 
{
	REQUIRE(value_return_factorial(3) == 6);
	REQUIRE(value_return_factorial(5) == 120);
	REQUIRE(value_return_factorial(6) == 720);

}


TEST_CASE("Verify the GDC of two numbers") 
{
	REQUIRE(value_return_gcd(5, 15) == 5);
	REQUIRE(value_return_gcd(21, 28) == 7);
	REQUIRE(value_return_gcd(25, 100) == 25);
	
}
