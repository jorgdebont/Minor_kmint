//
// Created by mafn on 11/17/16.
//

#ifndef MINOR_KMINT_MOVABLE_HPP
#define MINOR_KMINT_MOVABLE_HPP


#include "../graph/Vertex.hpp"
#include "../graph/Graph.hpp"
#include "../IGameObject.h"

class Movable : public IGameObject {
public:
    Movable(Graph& parent_field, Vertex* start_position);

    virtual void Update(float deltaTime) override;

    Vertex* current_position;
protected:
    Graph& _parent_field;

    void _jump_to_random_position();
    void _move_to_vertex(Vertex* destination);
};


#endif //MINOR_KMINT_MOVABLE_HPP
