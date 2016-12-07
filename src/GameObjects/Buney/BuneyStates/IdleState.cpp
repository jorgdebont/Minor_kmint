//
// Created by mafn on 12/2/16.
//

#include "IdleState.hpp"
#include "../Buney.hpp"
#include "../../Cow/Cow.hpp"
#include "BuneyFleeState.hpp"

IdleState::IdleState(Buney& context)
: BuneyState(context)
{
    this->name = "Buney idle";
}

void IdleState::update(float delta_time)
{
    if (this->_context.current_position == this->_context._parent_field.cow->current_position) {
        if (this->_context._has_pill) { //nested if for readability
            this->_context._parent_field.cow->sleep();
            this->_context._has_pill = false;
            this->_context.set_state(new BuneyFleeState(this->_context));
        }
        // else do nothing
    }
}
