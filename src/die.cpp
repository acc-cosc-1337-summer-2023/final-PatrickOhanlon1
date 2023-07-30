//
#include "die.h"

void Die::roll()
{
    srand(static_cast<unsigned int>(time(0)));
    roll_value = rand() % sides + 1;
}

int Die::rolled_value() const
{
    return roll_value;
}