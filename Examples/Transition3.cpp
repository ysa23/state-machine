#include <stdlib.h>
#include "Transition3.h"

namespace Examples
{
    StateMachine::ITransition* Transition3::_instance = NULL;

    StateMachine::ITransition* Transition3::GetInstance()
    {
        if (_instance == NULL)
            _instance = new Transition3();

        return _instance;
    }

    Transition3::Transition3() { }
}
