//
// Created by mafn on 11/25/16.
//

#ifndef MINOR_KMINT_PATHFINDING_HPP
#define MINOR_KMINT_PATHFINDING_HPP

#include <vector>
#include <list>
#include "../graph/Vertex.hpp"
#include "../GameObjects/AStar_Vertex.hpp"
#include "../graph/Graph.hpp"

using std::vector;
using std::list;

class Pathfinding {
public:
    static vector<Vertex*> astar(Graph& field, Vertex* start, Vertex* end);

private:
    static AStar_Vertex* _get_lowest_cost_vert(list<AStar_Vertex*>& haystack);
    static vector<AStar_Vertex*> _get_astar_neighbours(AStar_Vertex* start, Graph& field, Vertex* target);
    static AStar_Vertex* _make_astar_vertex(Vertex* vert, AStar_Vertex* parent, Vertex* target);
    static bool _contains_astar_vector_with_lower_total_cost(list<AStar_Vertex*>& haystack, AStar_Vertex& needle);
};


#endif //MINOR_KMINT_PATHFINDING_HPP
