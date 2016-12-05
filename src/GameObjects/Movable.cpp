//
// Created by mafn on 11/17/16.
//

#include "Movable.hpp"
#include "../RandomUtil.hpp"

Movable::Movable(SummonersRift& parent_field, Vertex* start_position)
: current_position(start_position)
, _parent_field(parent_field)
{
}

void Movable::jump_to_random_position()
{
    Vertex* random_vertex = RANDOM.choice(this->_parent_field.field.get_vertices());

    this->_move_to_vertex(random_vertex);
}

void Movable::_move_to_vertex(Vertex* destination)
{
    this->current_position = destination;

    this->SetOffset((uint32_t)destination->coordinates.x, (uint32_t)destination->coordinates.y);
}

void Movable::Update(float deltaTime)
{
    this->SetOffset(
        (uint32_t)this->current_position->coordinates.x,
        (uint32_t)this->current_position->coordinates.y
    );
}

bool Movable::is_on_position(Vertex* position)
{
    return this->current_position == position;
}
