//
// Created by mafn on 11/17/16.
//

#ifndef MINOR_KMINT_MOVABLE_HPP
#define MINOR_KMINT_MOVABLE_HPP


#include "../graph/Vertex.hpp"
#include "../graph/Graph.hpp"
#include "../IGameObject.h"
#include "../graph/SummonersRift.hpp"

class Movable : public IGameObject {
public:
    Movable(SummonersRift& parent_field, Vertex* start_position);

    void jump_to_random_position();
    bool is_on_position(Vertex* position);

    virtual void Update(float deltaTime) override;

    Vertex* current_position;

    SummonersRift& _parent_field;
    void _move_to_vertex(Vertex* destination);
};


#endif //MINOR_KMINT_MOVABLE_HPP
