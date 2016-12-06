//
// Created by mafn on 11/15/16.
//

#include "Buney.hpp"
#include "../../RandomUtil.hpp"
#include "BuneyStates/IdleState.hpp"
#include "BuneyStates/BuneyFleeForeverState.hpp"
#include "../../Pathfinding/Pathfinding.hpp"

Buney::Buney(SummonersRift& parent_field, Vertex* start_position)
: Movable(parent_field, start_position)
, _current_state(new BuneyFleeForeverState(*this))
{
    this->jump_to_random_position();

    this->_tex = this->mApplication->LoadTexture("rabbit-3.png");
    this->SetTexture(this->_tex);
    this->SetSize(40,40);
}

void Buney::Update(float deltaTime)
{
    Movable::Update(deltaTime);

    this->_current_state->update(deltaTime);
}

void Buney::set_state(BuneyState* new_state)
{
    this->_current_state = new_state;
}

void Buney::_recalculate_path()
{
    vector<Vertex*> calculated_path = Pathfinding::astar(this->_parent_field.field, this->current_position, this->_target->current_position);

    this->_path = deque<Vertex*>(calculated_path.begin(), calculated_path.end());
}

void Buney::_move_to_next_vertex()
{
    // Move to the next vertex in our path
    if (!this->_path.empty()) {
        Vertex* move_here = this->_path.back();
        this->_path.pop_back();

        this->_move_to_vertex(move_here);
    }
}