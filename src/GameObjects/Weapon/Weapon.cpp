//
// Created by mafn on 12/6/16.
//

#include "Weapon.hpp"

Weapon::Weapon(SummonersRift& field)
: Movable(field, nullptr)
{
    this->jump_to_random_position();

    this->SetTexture(mApplication->LoadTexture("wepon.png"));
    this->SetSize(32, 32);
}
