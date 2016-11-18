//
// Created by mafn on 11/17/16.
//

#ifndef MINOR_KMINT_ASTAR_VERTEX_HPP
#define MINOR_KMINT_ASTAR_VERTEX_HPP

#include "../graph/Vertex.hpp"

struct AStar_Vertex {
    AStar_Vertex(Vertex* vertex, AStar_Vertex* parent, float total_cost, float cost_from_start, float cost_to_end);

    Vertex* vertex;
    AStar_Vertex* parent;

    float total_cost;           // f
    float cost_from_start;      // g
    float cost_to_end;          // h (estimated)

    bool operator==(const AStar_Vertex& other) {
        return this->vertex == other.vertex
            && this->parent == other.parent;
    }
};

#endif //MINOR_KMINT_ASTAR_VERTEX_HPP
