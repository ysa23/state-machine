cmake_minimum_required(VERSION 3.3)
project(state_machine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp StateMachine/ITransition.h StateMachine/IState.h StateMachine/StateMachine.cpp StateMachine/StateMachine.h Examples/StateA.cpp Examples/StateA.h Examples/Transition1.cpp Examples/Transition1.h Examples/Transition2.cpp Examples/Transition2.h Examples/StateB.cpp Examples/StateB.h Examples/Transition3.cpp Examples/Transition3.h Examples/StateC.cpp Examples/StateC.h Examples/Transition4.cpp Examples/Transition4.h)
add_executable(state_machine ${SOURCE_FILES})