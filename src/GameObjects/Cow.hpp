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
#include "AStar_Vertex.hpp"

using std::deque;
using std::list;

class Cow : public Movable {

public:
    Cow(Graph& _graph, Movable* target);
    virtual ~Cow();

    virtual void Update(float deltaTime) override;

private:
    void _recalculate_path();
    void _move_to_next_vertex();

    // TODO: This should not be cow stuff
    float _calculate_distance_to_vertex(Vertex* goal);
    AStar_Vertex _get_lowest_cost_vert(list<AStar_Vertex>& haystack);
    vector<AStar_Vertex> _get_astar_neighbours(AStar_Vertex* start);
    AStar_Vertex _make_astar_vertex(Vertex* vert, AStar_Vertex* parent);
    bool _contains_astar_vector_with_lower_total_cost(list<AStar_Vertex>& haystack, AStar_Vertex& needle);

    const uint32_t _move_delay_ms = 5000;

    uint32_t _last_move_timestamp_ms;
    deque<Vertex*> _path;

    Movable* _target;
};


#endif //MINOR_KMINT_COW_HPP
