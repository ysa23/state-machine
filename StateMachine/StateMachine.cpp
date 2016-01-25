#include "StateMachine.h"

namespace StateMachine
{
    StateMachine::StateMachine(std::map<ITransition *, IState *> *transitions, IState *initialState)
    {
        _transitions = transitions;
        _currentState = initialState;
        _defaultState = initialState;
    }

    void StateMachine::Run()
    {
        ITransition *transition;

        while(true)
        {
            transition = _currentState->Run();
            _currentState->ExitState();

            _currentState = _transitions->find(transition) != _transitions->end() ?
                            (*_transitions)[transition] :
                            _defaultState;
        }
    }
}
