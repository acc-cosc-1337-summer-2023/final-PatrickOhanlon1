//
#ifndef come_out_phase
#define come_out_phase
#include "phase.h"


class ComeOutPhase : public Base
{
    public:
        RollOutcome get_outcome(Roll* roll);
};




#endif