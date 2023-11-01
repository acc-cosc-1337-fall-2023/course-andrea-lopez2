#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//#include "int.h"
#include "decimals.h"


TEST_CASE("Verify sales commission based on the bonus pay ") 
{
//	REQUIRE(get_sales_commission(100) == 5);
//	REQUIRE(get_sales_commission(750) == 45);
	
//	REQUIRE(get_sales_commission(1750) == 140);
//	REQUIRE(get_sales_commission(1499) == 104.93);
//	REQUIRE(get_sales_commission(1100) == 77.0);
REQUIRE(vector_of_primes(50) == vector<int> {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47} );

REQUIRE(vector_of_primes(10) == vector<int> {2, 3, 5, 7} );

}


