#ifndef EXAMPLES_STATEC_H
#define EXAMPLES_STATEC_H

#include "../StateMachine/IState.h"

namespace Examples
{
    class StateC : public StateMachine::IState
    {
    public:
        StateC();
        StateMachine::ITransition* Run();
        void ExitState();
    };
}

#endif //EXAMPLES_STATEC_H
