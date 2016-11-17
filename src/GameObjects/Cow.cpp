//
// Created by jazula on 11/15/16.
//

#include <SDL2/SDL_system.h>
#include "Cow.hpp"

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
    queue<Vertex*> open_list;
//      initialize the closed list
    queue<Vertex*> closed_list;
//      put the starting node on the open list (you can leave its f at zero)

//      while the open list is not empty
//          find the node with the least f on the open list, call it "q"
//          pop q off the open list
//          generate q's 8 successors and set their parents to q
//          for each successor
//              if successor is the goal, stop the search
//              successor.g = q.g + distance between successor and q
//              successor.h = distance from goal to successor
//              successor.f = successor.g + successor.h
//
//              if a node with the same position as successor is in the OPEN list \
//                  which has a lower f than successor, skip this successor
//              if a node with the same position as successor is in the CLOSED list \
//                  which has a lower f than successor, skip this successor
//              otherwise, add the node to the open list
//          end
//          push q on the closed list
//      end
}

void Cow::_move_to_next_vertex()
{
    // Move to the next vertex in our path
}

