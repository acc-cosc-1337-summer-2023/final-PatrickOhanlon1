//
#include "die.h"

void Die::roll()
{
    std::random_device rd;
    std::mt19937 rng = std::mt19937(rd());
    std::uniform_int_distribution<int> distribution(1, sides);
    roll_value = distribution(rng);
}

int Die::rolled_value() const
{
    return roll_value;
}