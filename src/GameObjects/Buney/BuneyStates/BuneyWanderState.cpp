//
// Created by mafn on 12/5/16.
//

#include "BuneyWanderState.hpp"
#include "../../../graph/Vertex.hpp"
#include "../../../RandomUtil.hpp"
#include "../Buney.hpp"

using std::vector;

BuneyWanderState::BuneyWanderState(Buney& context)
: BuneyState(context)
{

}

void BuneyWanderState::update(float delta_time)
{
    vector<Vertex*> neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);
    this->_context._move_to_vertex(RANDOM.choice(neighbours));
}
