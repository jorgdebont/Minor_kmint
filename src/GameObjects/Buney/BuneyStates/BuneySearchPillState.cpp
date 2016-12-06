//
// Created by mafn on 12/6/16.
//

#include "BuneySearchPillState.hpp"

#include "../Buney.hpp"

BuneySearchPillState::BuneySearchPillState(Buney& context)
: BuneyState(context)
{
    this->_context._target = (Movable*)this->_context._parent_field.pill;
    this->_context._recalculate_path();
}

void BuneySearchPillState::update(float delta_time)
{
    this->_context._move_to_next_vertex();

    if (this->_context.current_position == this->_context._target->current_position) {
        this->_context._target->jump_to_random_position();
        this->_context.set_state(new BuneyWanderState(this->_context));
    }
}
