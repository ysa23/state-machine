#include <stdlib.h>
#include "Transition2.h"

namespace Examples
{
    StateMachine::ITransition* Transition2::_instance = NULL;

    StateMachine::ITransition* Transition2::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition2();

        return _instance;
    }

    Transition2::Transition2() { }
}
