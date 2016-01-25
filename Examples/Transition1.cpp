#include <stdlib.h>
#include "Transition1.h"

namespace Examples
{
    StateMachine::ITransition* Transition1::_instance = NULL;

    StateMachine::ITransition* Transition1::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition1();

        return _instance;
    }

    Transition1::Transition1() { }
}
