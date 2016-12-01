//
// Created by mafn on 12/1/16.
//

#include "CowChaseState.hpp"
#include "../Cow.hpp"

CowChaseState::CowChaseState(Cow& context)
: CowState(context)
{
    this->_context._target = (Movable*)this->_context._parent_field.buney;
}

void CowChaseState::update(float delta_time)
{
    this->_context._recalculate_path();
    this->_context._move_to_next_vertex();

    if (this->_context.current_position == this->_context._target->current_position) {
        this->_context.set_state(new CowWanderState(this->_context));
        this->_context._target->jump_to_random_position();
    }
}
