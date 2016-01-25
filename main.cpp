#include <iostream>
#include <map>
#include "StateMachine/StateMachine.h"
#include "Examples/StateA.h"
#include "Examples/Transition1.h"
#include "Examples/StateB.h"
#include "Examples/StateC.h"
#include "Examples/Transition2.h"
#include "Examples/Transition3.h"
#include "Examples/Transition4.h"

using namespace std;
using namespace Examples;

int main()
{
    map<StateMachine::ITransition*, StateMachine::IState*> specificStateMachine;

    StateMachine::IState* initialState = new StateA();
    StateMachine::IState* stateC = new StateC();

    /* StateA -> */ specificStateMachine[Transition1::GetInstance()] = new StateB();
        /* StateB -> */ specificStateMachine[Transition3::GetInstance()] = stateC;
            /* StateC -> */ specificStateMachine[Transition4::GetInstance()] = initialState;
    /* StateA -> */ specificStateMachine[Transition2::GetInstance()] = stateC;

    StateMachine::StateMachine *stateMachine = new StateMachine::StateMachine(&specificStateMachine, initialState);
    stateMachine->Run();

    return 0;
}