//
// Created by mafn on 12/1/16.
//

#include "Pill.hpp"

Pill::Pill(Graph& field)
: Movable(field, nullptr)
{
    this->jump_to_random_position();

    this->SetTexture(mApplication->LoadTexture("pill.png"));
    this->SetSize(30, 30);
}
