//
// Created by jazula on 12/6/16.
//

#include "CowSleepState.hpp"
#include "CowWanderState.hpp"
#include "../Cow.hpp"

CowSleepState::CowSleepState(Cow& context)
: CowState(context)
, name("sleeping")
, _turns_remaining(5)
{}

void CowSleepState::update(float delta_time)
{
    if(_turns_remaining--){ //check turns remaining
        this->_context.set_state(new CowWanderState(this->_context));
    }
}
