#ifndef EXAMPLES_TRANSITION3_H
#define EXAMPLES_TRANSITION3_H


#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition3 : public StateMachine::ITransition
    {
    public:
        static StateMachine::ITransition* GetInstance();
    private:
        static StateMachine::ITransition* _instance;
        Transition3();
    };
}



#endif //STATE_MACHINE_TRANSITION3_H
