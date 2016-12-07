//
// Created by mafn on 12/1/16.
//

#include "CowWanderState.hpp"

#include <vector>
#include "../../../graph/Vertex.hpp"
#include "../Cow.hpp"
#include "../../../RandomUtil.hpp"

using std::vector;

CowWanderState::CowWanderState(Cow& context)
: CowState(context)
{
    this->name = "Cow wander";
}

void CowWanderState::update(float delta_time)
{
    this->_boredom_counter++;

    if (this->_boredom_counter < this->_boredom_threshold) {
        vector<Vertex*> neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);
        this->_context._move_to_vertex(RANDOM.choice(neighbours));
    } else {
        this->_context.set_state(new CowSearchPillState(this->_context));
    }
}
