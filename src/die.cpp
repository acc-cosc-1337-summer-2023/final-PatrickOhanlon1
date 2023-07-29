//
#include "die.h"

void DieList::roll()
{
    roll_value = rand() % sides + 1;
}

int DieList::rolled_value() const
{
    return roll_value;
}