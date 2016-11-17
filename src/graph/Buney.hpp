//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_BUNEY_HPP
#define MINOR_KMINT_BUNEY_HPP


#include "../IGameObject.h"
#include "Vertex.hpp"
#include "Graph.hpp"
#include "Movable.hpp"

class Buney : public Movable {
public:
    Buney(Graph& parent_field, Vertex* start_position);

    virtual void Update(float deltaTime) override;

private:

    SDL_Texture* _tex;
};


#endif //MINOR_KMINT_BUNEY_HPP
