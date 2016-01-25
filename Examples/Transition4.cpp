#include <stdlib.h>
#include "Transition4.h"

namespace Examples
{
    StateMachine::ITransition* Transition4::_instance = NULL;

    StateMachine::ITransition* Transition4::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition4();

        return _instance;
    }

    Transition4::Transition4() { }
}
