//
#ifndef Phase_h
#define Phase_h
#include "roll.h"
enum RollOutcome
{
    natural,
    craps,
    point,
    seven_out,
    nopoint,
};

class Base
{
    public:
    RollOutcome get_outcome(Roll* roll);
};

#endif