#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("roll")
{
	for (int i = 0; i < 10; i++)
	{	
		Die die;
        die.roll();
        bool test_roll = die.rolled_value() < 7 && die.rolled_value() > 0;
        REQUIRE(test_roll);
	}

}

TEST_CASE("roll twice")
{
    for (int i = 0; i < 10; i++)
    {
        Die die1;
        Die die2;
        Roll roll(die1, die2);
        roll.roll_die();
        bool test_roll = roll.roll_value() < 13 && roll.roll_value() > 1;
        REQUIRE(test_roll);
    }
}