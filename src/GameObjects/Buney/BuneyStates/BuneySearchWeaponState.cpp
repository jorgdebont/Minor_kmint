//
// Created by mafn on 12/6/16.
//

#include "BuneySearchWeaponState.hpp"

#include "../Buney.hpp"

BuneySearchWeaponState::BuneySearchWeaponState(Buney& context)
: BuneyState(context)
{
    this->_context._target = (Movable*)this->_context._parent_field.weapon;
    this->_context._recalculate_path();
}

void BuneySearchWeaponState::update(float delta_time)
{
    this->_context._move_to_next_vertex();

    if (this->_context.current_position == this->_context._target->current_position) {
        this->_context._target->jump_to_random_position();
        // TODO: change to attack state.
        // this->_context.set_state(new BuneyAttackState(this->_context));
    }
}
