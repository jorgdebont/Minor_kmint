//
// Created by jazula on 11/15/16.
//

#include <SDL2/SDL_system.h>
#include <iostream>
#include "Cow.hpp"
#include "../../Pathfinding/Pathfinding.hpp"
#include "CowStates/CowSleepState.hpp"

Cow::Cow(SummonersRift& _graph, Movable* target)
: Movable(_graph, nullptr)
, _target(target)
{
    this->_current_state = new CowWanderState(*this);
    this->jump_to_random_position();

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

    this->_current_state->update(deltaTime);
}

void Cow::_recalculate_path()
{
    vector<Vertex*> calculated_path = Pathfinding::astar(this->_parent_field.field, this->current_position, this->_target->current_position);

    this->_path = deque<Vertex*>(calculated_path.begin(), calculated_path.end());
}

void Cow::_move_to_next_vertex()
{
    // Move to the next vertex in our path
    if (!this->_path.empty()) {
        Vertex* move_here = this->_path.back();
        this->_path.pop_back();

        this->_move_to_vertex(move_here);
    }
}

void Cow::Draw()
{
    IGameObject::Draw();
    this->mApplication->SetColor(Color {0, 255, 0, 255});

    for(auto vertex : this->_path){
        this->mApplication->DrawCircle(vertex->coordinates.x, vertex->coordinates.y, 8, true);
    }

    this->mApplication->SetColor({0,0,0,255});
    this->mApplication->DrawText("Current cow state: " + this->_current_state->name, 700, 200);
}

void Cow::set_state(CowState* new_state)
{
    this->_current_state = new_state;
}

void Cow::die()
{
    Movable::die();
    this->set_state(new CowWanderState(*this));
}

void Cow::sleep()
{
    this->set_state(new CowSleepState(*this));
}