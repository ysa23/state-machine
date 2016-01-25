#ifndef EXAMPLES_TRANSITION2_H
#define EXAMPLES_TRANSITION2_H

#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition2 : public StateMachine::ITransition
    {
    public:
        static StateMachine::ITransition* GetInstance();

    private:
        Transition2();

        static StateMachine::ITransition* _instance;
    };
}

#endif //EXAMPLES_TRANSITION2_H
