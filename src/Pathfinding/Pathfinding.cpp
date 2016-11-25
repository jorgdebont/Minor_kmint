//
// Created by mafn on 11/25/16.
//

#include "Pathfinding.hpp"

vector<Vertex*> Pathfinding::astar(Graph& field, Vertex* start, Vertex* end)
{
    vector<Vertex*> path;

    list<AStar_Vertex*> open_list;
    list<AStar_Vertex*> closed_list;

    open_list.push_back(new AStar_Vertex {
        start,
        nullptr,
        0,
        0,
        Graph::calculate_raw_distance_between_vertici(start, end)
    });

    while (!open_list.empty()) {
        AStar_Vertex* q = Pathfinding::_get_lowest_cost_vert(open_list);
        open_list.remove(q);
        // Search neighbours (parent becomes q)
        vector<AStar_Vertex*> q_neighbours = Pathfinding::_get_astar_neighbours(q, field, end);

        for (AStar_Vertex* astar_neighbour : q_neighbours) {
            if (astar_neighbour->vertex == end) {
                AStar_Vertex* current_vertex = astar_neighbour;

                while(current_vertex->vertex != start){
                    path.push_back(current_vertex->vertex);
                    current_vertex = current_vertex->parent;
                }

                return path;
            }

            if (Pathfinding::_contains_astar_vector_with_lower_total_cost(open_list, *astar_neighbour)) {
                continue;
            } else if (Pathfinding::_contains_astar_vector_with_lower_total_cost(closed_list, *astar_neighbour)) {
                continue;
            }

            open_list.push_back(astar_neighbour);
        }

        closed_list.push_back(q);
    }

    return path;
}

AStar_Vertex* Pathfinding::_get_lowest_cost_vert(list<AStar_Vertex*>& haystack)
{
    if (haystack.size() <= 0) {
        throw "You're trying to get the lowest cost vert of an empty list";
    }

    AStar_Vertex* lowest = haystack.front();

    for (AStar_Vertex* vert : haystack) {
        if (vert->total_cost < lowest->total_cost) {
            lowest = vert;
        }
    }

    return lowest;
}

vector<AStar_Vertex*> Pathfinding::_get_astar_neighbours(AStar_Vertex* start, Graph& field, Vertex* target)
{
    vector<AStar_Vertex*> astar_neighbours;

    vector<Vertex*> q_neighbours = field.get_vertex_neighbours(start->vertex);
    for (auto vertex : q_neighbours) {
        astar_neighbours.push_back(Pathfinding::_make_astar_vertex(vertex, start, target));
    }

    return astar_neighbours;
}

AStar_Vertex* Pathfinding::_make_astar_vertex(Vertex* vert, AStar_Vertex* parent, Vertex* target)
{
    float cost_from_start = parent->cost_from_start + Graph::calculate_raw_distance_between_vertici(vert, parent->vertex);
    float cost_to_end = Graph::calculate_raw_distance_between_vertici(vert, target);
    float total_cost = cost_from_start + cost_to_end;

    AStar_Vertex* to_return = new AStar_Vertex {
        vert,
        parent,
        total_cost,
        cost_from_start,
        cost_to_end
    };

    if (to_return == to_return->parent) {
        throw "u dun goofed";
    }

    return to_return;
}

bool Pathfinding::_contains_astar_vector_with_lower_total_cost(list<AStar_Vertex*>& haystack, AStar_Vertex& needle)
{
    for (AStar_Vertex* astar_vector : haystack) {
        if (haystack.size() == 0) {
            throw "FUCK";
        }

        if (astar_vector->vertex->coordinates.x == needle.vertex->coordinates.x
            && astar_vector->vertex->coordinates.y == needle.vertex->coordinates.y) {

            if (astar_vector->total_cost < needle.total_cost) {
                return true;
            }
        }
    }

    return false;
}
