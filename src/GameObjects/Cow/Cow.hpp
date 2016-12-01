//
// Created by jazula on 11/15/16.
//

#ifndef MINOR_KMINT_COW_HPP
#define MINOR_KMINT_COW_HPP

#include <list>
#include <deque>
#include "../../IGameObject.h"
#include "../../graph/Vertex.hpp"
#include "../../graph/Graph.hpp"
#include "../Movable.hpp"
#include "CowStates/CowState.hpp"
#include "CowStates/CowChaseState.hpp"

using std::deque;
using std::list;

class Cow : public Movable {
    friend class CowState;
    friend class CowChaseState;
public:
    Cow(Graph& _graph, Movable* target);
    virtual ~Cow();

    virtual void Update(float deltaTime) override;
    virtual void Draw() override;

    void set_state(CowState* new_state);

private:
    void _recalculate_path();
    void _move_to_next_vertex();

    CowState* _current_state;
    deque<Vertex*> _path;

    Movable* _target;
};


#endif //MINOR_KMINT_COW_HPP
