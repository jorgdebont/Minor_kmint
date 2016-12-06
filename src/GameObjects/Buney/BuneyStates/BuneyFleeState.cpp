//
// Created by mafn on 12/6/16.
//

#include "BuneyFleeState.hpp"
#include "BuneyWanderState.hpp"
#include "../Buney.hpp"

BuneyFleeState::BuneyFleeState(Buney& context)
: BuneyState(context)
, _flee_state(context)
, _turn_counter(0)
{

}

void BuneyFleeState::update(float delta_time)
{
    if (this->_turn_counter < this->_length) {
        this->_flee_state.update(delta_time);
        this->_turn_counter++;
    } else {
        this->_context.set_state(new BuneyWanderState(this->_context));
    }
}
