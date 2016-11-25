//
// Created by jazula on 11/15/16.
//

#ifndef MINOR_KMINT_COW_HPP
#define MINOR_KMINT_COW_HPP

#include <list>
#include <deque>
#include "../IGameObject.h"
#include "../graph/Vertex.hpp"
#include "../graph/Graph.hpp"
#include "Movable.hpp"

using std::deque;
using std::list;

class Cow : public Movable {

public:
    Cow(Graph& _graph, Movable* target);
    virtual ~Cow();

    virtual void Update(float deltaTime) override;
    virtual void Draw() override;

private:
    void _recalculate_path();
    void _move_to_next_vertex();

    const uint32_t _move_delay_ms = 100;

    uint32_t _last_move_timestamp_ms;
    deque<Vertex*> _path;

    Movable* _target;
};


#endif //MINOR_KMINT_COW_HPP
