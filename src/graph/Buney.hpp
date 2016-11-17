//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_BUNEY_HPP
#define MINOR_KMINT_BUNEY_HPP


#include "../IGameObject.h"
#include "Vertex.hpp"
#include "Graph.hpp"

class Buney : public IGameObject {
public:
    Buney(Graph& parent_field, Vertex* start_position);

    Vertex* current_position;

    virtual void Update(float deltaTime) override;

private:
    Graph& _parent_field;

    void _jump_to_random_position();
    void _move_to_vertex(Vertex* destination);

    SDL_Texture* _tex;
};


#endif //MINOR_KMINT_BUNEY_HPP
