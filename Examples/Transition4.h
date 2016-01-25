#ifndef EXAMPLES_TRANSITION4_H
#define EXAMPLES_TRANSITION4_H

#include "../StateMachine/ITransition.h"

namespace Examples
{
    class Transition4 : public StateMachine::ITransition
    {
    public:
        static StateMachine::ITransition* GetInstance();

    private:
        static StateMachine::ITransition* _instance;

        Transition4();
    };
}


#endif //EXAMPLES_TRANSITION4_H
