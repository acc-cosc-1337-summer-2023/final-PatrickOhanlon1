//
#ifndef point_phase
#define point_phase
#include "phase.h"


class PointPhase : public Base
{
    public:
        PointPhase (int p);
        RollOutcome get_outcome(Roll* roll);
    private:
        int point;
};


#endif