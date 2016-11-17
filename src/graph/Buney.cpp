//
// Created by mafn on 11/15/16.
//

#include "Buney.hpp"
#include "../RandomUtil.hpp"

Buney::Buney(Graph& parent_field, Vertex* start_position)
: current_position(start_position)
, _parent_field(parent_field)
{
    this->_tex = this->mApplication->LoadTexture("rabbit-3.png");
    this->SetTexture(this->_tex);
    this->SetSize(40,40);

    this->_jump_to_random_position();
}

void Buney::_jump_to_random_position()
{
    Vertex* random_vertex = RANDOM.choice(this->_parent_field.get_vertices());

    this->_move_to_vertex(random_vertex);
}

void Buney::_move_to_vertex(Vertex* destination)
{
    this->current_position = destination;
    this->SetOffset((uint32_t)destination->coordinates.x, (uint32_t)destination->coordinates.y);
}

void Buney::Update(float deltaTime)
{

}
