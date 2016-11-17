//
// Created by jazula on 11/15/16.
//

#include <SDL2/SDL_system.h>
#include "Cow.hpp"

Cow::Cow(Graph& _graph)
: Movable(_graph, nullptr)
, _last_move_timestamp_ms(mApplication->GetTimeSinceStartedMS())
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
    // Calculate path with A*
}

void Cow::_move_to_next_vertex()
{
    // Move to the next vertex in our path
}

