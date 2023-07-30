//
#include <iostream>

class ComeOutPhase
{
    if(roll.rolled_value = 7 || roll.rolled_value = 11)
    {
        return RollOutcome::natural;
    } 
    else if (roll.rolled_value = 2 || roll.rolled_value = 3 || roll.rolled_value = 12)
    {
        return RollOutcome::craps;
    }
    else
    {
        return RollOutcome::point;
    }
};