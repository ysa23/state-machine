#ifndef STATE_MACHINE_STATEMACHINE_H
#define STATE_MACHINE_STATEMACHINE_H

#include <map>
#include "ITransition.h"
#include "IState.h"

namespace StateMachine
{
    class StateMachine
    {
    public:
        StateMachine(std::map<ITransition*,IState*> *transitions, IState* initialState);
        void Run();

    private:
        std::map<ITransition*, IState*> *_transitions;
        IState *_currentState;
        IState *_defaultState;
    };
}

#endif //STATE_MACHINE_STATEMACHINE_H
