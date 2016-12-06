//
// Created by mafn on 11/15/16.
//

#include "Buney.hpp"
#include "../../RandomUtil.hpp"
#include "BuneyStates/IdleState.hpp"
#include "BuneyStates/BuneyFleeForeverState.hpp"

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

void Buney::die()
{
    this->jump_to_random_position();
}
