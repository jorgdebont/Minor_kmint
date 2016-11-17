//
// Created by jazula on 11/15/16.
//

#include <SDL2/SDL_system.h>
#include "Cow.hpp"

Cow::Cow(Graph& _graph)
: _graph(_graph)
{
    this->SetTexture(mApplication->LoadTexture("lemmling_Cartoon_cow.png"));
    this->SetSize(40, 40);
}

Cow::~Cow()
{
    SDL_DestroyTexture(this->GetTexture());
}

void Cow::Update(float deltaTime)
{
    this->SetOffset(
        (uint32_t)this->current_vertex->coordinates.x,
        (uint32_t)this->current_vertex->coordinates.y
    );
}

