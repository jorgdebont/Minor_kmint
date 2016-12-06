//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_BUNEY_HPP
#define MINOR_KMINT_BUNEY_HPP


#include "../../IGameObject.h"
#include "../../graph/Vertex.hpp"
#include "../../graph/Graph.hpp"
#include "../Movable.hpp"
#include "BuneyStates/BuneyState.hpp"
#include "BuneyStates/BuneyWanderState.hpp"

class Buney : public Movable {
    friend class BuneyWanderState;
public:
    Buney(SummonersRift& parent_field, Vertex* start_position);

    virtual void Update(float deltaTime) override;

    void set_state(BuneyState* new_state);

    void die();
private:

    BuneyState* _current_state;
    SDL_Texture* _tex;
};


#endif //MINOR_KMINT_BUNEY_HPP
