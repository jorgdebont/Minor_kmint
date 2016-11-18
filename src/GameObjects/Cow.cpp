//
// Created by jazula on 11/15/16.
//

#include <SDL2/SDL_system.h>
#include <iostream>
#include "Cow.hpp"
#include "AStar_Vertex.hpp"

Cow::Cow(Graph& _graph, Movable* target)
: Movable(_graph, nullptr)
, _last_move_timestamp_ms(mApplication->GetTimeSinceStartedMS())
, _target(target)
{
    this->_jump_to_random_position();

    this->SetTexture(mApplication->LoadTexture("lemmling_Cartoon_cow.png"));
    this->SetSize(40, 40);
}

Cow::~Cow()
{
    SDL_DestroyTexture(this->GetTexture());
}

void Cow::Update(float deltaTime)
{
    Movable::Update(deltaTime);

    uint32_t current_time = this->mApplication->GetTimeSinceStartedMS();
    if (current_time > this->_last_move_timestamp_ms + this->_move_delay_ms) {
        this->_move_to_next_vertex();
        this->_last_move_timestamp_ms = current_time;
    }

    if (this->_path.empty()) {
        this->_recalculate_path();
    }
}

void Cow::_recalculate_path()
{
    Vertex& target_position = *(this->_target->current_position);

//      initialize the open list
    list<AStar_Vertex> open_list;
//      initialize the closed list
    list<AStar_Vertex> closed_list;
//      put the starting node on the open list (you can leave its f at zero)
    open_list.push_back(AStar_Vertex {
        .vertex = this->current_position,
        .parent = nullptr,
        .total_cost = 0,
        .cost_from_start = 0,
        .cost_to_end = this->_calculate_distance_to_vertex(this->_target->current_position)
    });
    //std::cout << "Start: " <<

//      while the open list is not empty
    while (!open_list.empty()) {
//          find the node with the least f on the open list, call it "q"
        AStar_Vertex q = this->_get_lowest_cost_vert(open_list);
//          pop q off the open list
        open_list.remove(q);
//          generate q's 8 successors and set their parents to q
        vector<AStar_Vertex> q_neighbours = this->_get_astar_neighbours(&q);
//          for each successor
        for (AStar_Vertex astar_neighbour : q_neighbours) {
//              if successor is the goal, stop the search
            if (astar_neighbour.vertex == this->_target->current_position) {
//                this->_path.push_back(astar_neighbour.vertex);
                AStar_Vertex* current_vertex = &astar_neighbour;
                while(current_vertex->vertex != this->current_position){
                    this->_path.push_back(current_vertex->vertex);
                    current_vertex = current_vertex->parent;
                }
                return;
            }
//              successor.g = q.g + distance between successor and q
//              successor.h = distance from goal to successor
//              successor.f = successor.g + successor.h
//
//              if a node with the same position as successor is in the OPEN list
//              which has a lower f than successor,
            if (this->_contains_astar_vector_with_lower_total_cost(open_list, astar_neighbour)) {
                // skip this successor
                continue;
            }
//              if a node with the same position as successor is in the CLOSED list which has a lower f than successor
            if (this->_contains_astar_vector_with_lower_total_cost(closed_list, astar_neighbour)) {
                // skip this successor
                continue;
            }
//              otherwise, add the node to the open list
            open_list.push_back(astar_neighbour);
//          end
        }
//          push q on the closed list
        closed_list.push_back(q);
//      end
    }
}

void Cow::_move_to_next_vertex()
{
    // Move to the next vertex in our path
    Vertex* move_here = this->_path.back();
    this->_path.pop_back();
    std::cout << "Mjove " << std::endl;

    this->_move_to_vertex(move_here);
}

float Cow::_calculate_distance_to_vertex(Vertex* goal)
{
    return Graph::calculate_raw_distance_between_vertici(this->current_position, goal);
}

AStar_Vertex Cow::_get_lowest_cost_vert(list<AStar_Vertex>& haystack)
{
    if (haystack.size() <= 0) {
        throw "You're trying to get the lowest cost vert of an empty list";
    }

    AStar_Vertex lowest = haystack.front();

    for (AStar_Vertex vert : haystack) {
        if (vert.total_cost < lowest.total_cost) {
            lowest = vert;
        }
    }

    return lowest;
}

vector<AStar_Vertex> Cow::_get_astar_neighbours(AStar_Vertex* start)
{
    vector<AStar_Vertex> astar_neighbours;

    vector<Vertex*> q_neighbours = this->_parent_field.get_vertex_neighbours(start->vertex);
    for (auto vertex : q_neighbours) {
        astar_neighbours.push_back(this->_make_astar_vertex(vertex, start));
    }

    return astar_neighbours;
}

AStar_Vertex Cow::_make_astar_vertex(Vertex* vert, AStar_Vertex* parent)
{
    float cost_from_start = parent->cost_from_start + Graph::calculate_raw_distance_between_vertici(vert, parent->vertex);
    float cost_to_end = Graph::calculate_raw_distance_between_vertici(vert, this->_target->current_position);
    float total_cost = cost_from_start + cost_to_end;

    AStar_Vertex to_return = AStar_Vertex {
        .vertex = vert,
        .parent = parent,
        .total_cost = total_cost,
        .cost_from_start = cost_from_start,
        .cost_to_end = cost_to_end
    };

    if (&to_return == to_return.parent) {
        throw "u dun goofed";
    }

    return to_return;
}

bool Cow::_contains_astar_vector_with_lower_total_cost(list<AStar_Vertex>& haystack, AStar_Vertex& needle)
{
    for (AStar_Vertex& astar_vector : haystack) {
        if (haystack.size() == 0) {
            throw "FUCK";
        }

        if (astar_vector.vertex->coordinates.x == needle.vertex->coordinates.x
            && astar_vector.vertex->coordinates.y == needle.vertex->coordinates.y) {

            if (astar_vector.total_cost < needle.total_cost) {
                return true;
            }
        }
    }

    return false;
}