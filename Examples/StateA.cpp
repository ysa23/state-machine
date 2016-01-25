#include <iostream>
#include <thread>
#include <chrono>
#include "StateA.h"
#include "Transition1.h"
#include "Transition2.h"

using namespace std;

namespace Examples
{
    StateA::StateA()
    {
        _flag = false;
    }

    StateMachine::ITransition* StateA::Run()
    {
        cout << "State A" << endl;

        this_thread::sleep_for(chrono::seconds(1));

        return _flag ?
               Transition1::GetInstance() :
               Transition2::GetInstance();
    }

    void StateA::ExitState()
    {
        _flag = !_flag;
    }
}
