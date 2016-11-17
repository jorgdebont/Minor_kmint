//
// Created by jazula on 11/15/16.
//

#ifndef MINOR_KMINT_COW_HPP
#define MINOR_KMINT_COW_HPP

#include <deque>
#include "../IGameObject.h"
#include "Vertex.hpp"
#include "Graph.hpp"
#include "Movable.hpp"

using std::deque;

class Cow : public Movable {

public:
    Cow(Graph& _graph);
    virtual ~Cow();

    virtual void Update(float deltaTime) override;

private:
    void _recalculate_path();
    void _move_to_next_vertex();

    const uint32_t _move_delay_ms = 500;

    uint32_t _last_move_timestamp_ms;
    deque<Vertex*> _path;
};


#endif //MINOR_KMINT_COW_HPP
