#ifndef EXAMPLES_STATEA_H
#define EXAMPLES_STATEA_H

#include <stdlib.h>
#include "../StateMachine/IState.h"

namespace Examples
{
    class StateA : public StateMachine::IState
    {
    public:
        StateA();
        StateMachine::ITransition *Run();
        void ExitState();
    private:
        bool _flag;
    };
}

#endif //EXAMPLES_STATEA_H
