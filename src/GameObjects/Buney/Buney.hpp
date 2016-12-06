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
#include "BuneyStates/BuneySearchPillState.hpp"
#include "BuneyStates/BuneySearchWeaponState.hpp"
#include "BuneyStates/BuneyAttackState.hpp"

#include <deque>

using std::deque;

class Buney : public Movable {
    friend class BuneyWanderState;
    friend class BuneySearchPillState;
    friend class BuneyAttackState;
    friend class BuneySearchWeaponState;
public:
    Buney(SummonersRift& parent_field, Vertex* start_position);

    virtual void Update(float deltaTime) override;

    void set_state(BuneyState* new_state);

private:
    void _recalculate_path();
    void _move_to_next_vertex();

    BuneyState* _current_state;
    SDL_Texture* _tex;

    deque<Vertex*> _path;

    Movable* _target;
};


#endif //MINOR_KMINT_BUNEY_HPP
