//
// Created by mafn on 12/1/16.
//

#include "CowSearchPillState.hpp"
#include "../Cow.hpp"

CowSearchPillState::CowSearchPillState(Cow& context)
: CowState(context)
{
    this->name = "Cow search pill";

    this->_context._target = (Movable*)this->_context._parent_field.pill;
    this->_context._recalculate_path();
}

void CowSearchPillState::update(float delta_time)
{
    this->_context._move_to_next_vertex();

    if (this->_context.current_position == this->_context._target->current_position) {
        this->_context._target->jump_to_random_position();
        this->_context.set_state(new CowChaseState(this->_context));
    }
}
