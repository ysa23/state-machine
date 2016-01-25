#ifndef EXAMPLES_TRANSITION1_H
#define EXAMPLES_TRANSITION1_H

#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition1 : public StateMachine::ITransition
    {
    public:
        static StateMachine::ITransition* GetInstance();

    private:
        Transition1();

        static StateMachine::ITransition* _instance;
    };
}

#endif //EXAMPLES_TRANSITION1_H
