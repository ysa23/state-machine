#ifndef STATE_MACHINE_ISTATE_H
#define STATE_MACHINE_ISTATE_H

#include "ITransition.h"

namespace StateMachine
{
    class IState
    {
    public:
        IState() {};
        virtual ITransition *Run() = 0;
        virtual void ExitState() = 0;
    };
}

#endif //STATE_MACHINE_ISTATE_H
