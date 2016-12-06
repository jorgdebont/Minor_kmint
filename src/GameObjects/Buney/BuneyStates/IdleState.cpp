//
// Created by mafn on 12/2/16.
//

#include "IdleState.hpp"

IdleState::IdleState(Buney& context)
: BuneyState(context)
{
    this->name = "Buney idle";
}

void IdleState::update(float delta_time)
{
    // Do nothing, lel
}
