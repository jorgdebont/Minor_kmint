//
// Created by jazula on 12/6/16.
//

#include "BuneyAttackState.hpp"
#include "../Buney.hpp"
#include "../../Cow/Cow.hpp"

BuneyAttackState::BuneyAttackState(Buney& context)
: BuneyState(context)
{
    this->name = "Buney attack";

    this->_context._target = (Movable*)this->_context._parent_field.cow;
}

void BuneyAttackState::update(float delta_time)
{
    this->_context._recalculate_path();
    this->_context._move_to_next_vertex();

    if (this->_context._cow_is_in_range_of_vertex(this->_context.current_position)) {
        this->_context._parent_field.cow->die();
        this->_context.set_state(new BuneyWanderState(this->_context));
    }

}
