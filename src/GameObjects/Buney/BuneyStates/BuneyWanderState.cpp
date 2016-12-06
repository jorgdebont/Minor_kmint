//
// Created by mafn on 12/5/16.
//

#include "BuneyWanderState.hpp"
#include "../../../graph/Vertex.hpp"
#include "../../../RandomUtil.hpp"
#include "../Buney.hpp"
#include "../../../Pathfinding/Pathfinding.hpp"
#include "../../Weapon/Weapon.hpp"
#include "../../Pill/Pill.hpp"

using std::vector;

BuneyWanderState::BuneyWanderState(Buney& context)
: BuneyState(context)
{
    this->name = "Buney wander";
}

void BuneyWanderState::update(float delta_time)
{
    if (this->_context._cow_is_in_range_of_vertex(this->_context.current_position)) {
        // Check if we can get to weapon without running into a cow
        vector<Vertex*> weapon_path = Pathfinding::astar(this->_context._parent_field.field, this->_context.current_position, this->_context._parent_field.weapon->current_position);
        if (!this->_context._path_contains_cow(weapon_path)) {
            this->_context.set_state(new BuneySearchWeaponState(this->_context));
            return;
        }

        // Check if we can get to pill without running into a cow
        vector<Vertex*> pill_path = Pathfinding::astar(this->_context._parent_field.field, this->_context.current_position, this->_context._parent_field.pill->current_position);
        if (!this->_context._path_contains_cow(pill_path)) {
            this->_context.set_state(new BuneySearchPillState(this->_context));
            return;
        }

        // Otherwise, we just flee forever.
        this->_context.set_state(new BuneyFleeForeverState(this->_context));
    } else {
        vector<Vertex*> neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);
        this->_context._move_to_vertex(RANDOM.choice(neighbours));
    }
}
