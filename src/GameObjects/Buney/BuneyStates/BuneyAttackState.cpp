//
// Created by jazula on 12/6/16.
//

#include "BuneyAttackState.hpp"
#include "../Buney.hpp"
#include "../../Cow/Cow.hpp"

BuneyAttackState::BuneyAttackState(Buney& context)
: BuneyState(context)
{
    this->_context._target = (Movable*)this->_context._parent_field.cow;
    this->_context._recalculate_path();
}

void BuneyAttackState::update(float delta_time)
{
    this->_context._move_to_next_vertex();

    if (this->_cow_in_shoot_range(this->_context.current_position)) {
        this->_context._parent_field.cow->die();
        this->_context.set_state(new BuneyWanderState(this->_context));
    }

}

bool BuneyAttackState::_cow_in_shoot_range(Vertex* to_check)
{
    if (this->_context._parent_field.cow->is_on_position(to_check)) {
        return true;
    }

    vector<Vertex*> to_check_neighbours = this->_context._parent_field.field.get_vertex_neighbours(to_check);
    for (Vertex* to_check_neighbour : to_check_neighbours) {
        if (this->_context._parent_field.cow->is_on_position(to_check_neighbour)) {
            return true;
        }
    }

    return false;
}
