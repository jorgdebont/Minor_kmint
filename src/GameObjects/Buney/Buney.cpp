//
// Created by mafn on 11/15/16.
//

#include "Buney.hpp"
#include "../../RandomUtil.hpp"

Buney::Buney(SummonersRift& parent_field, Vertex* start_position)
: Movable(parent_field, start_position)
{
    this->jump_to_random_position();

    this->_tex = this->mApplication->LoadTexture("rabbit-3.png");
    this->SetTexture(this->_tex);
    this->SetSize(40,40);
}

void Buney::Update(float deltaTime)
{
    Movable::Update(deltaTime);
}
