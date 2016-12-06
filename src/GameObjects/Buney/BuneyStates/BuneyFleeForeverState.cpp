//
// Created by mafn on 12/5/16.
//

#include <algorithm>

#include "BuneyFleeForeverState.hpp"
#include "../Buney.hpp"
#include "../../Cow/Cow.hpp"
#include "../../../RandomUtil.hpp"

BuneyFleeForeverState::BuneyFleeForeverState(Buney& context)
: BuneyState(context)
{
    this->name = "Buney Flee forever";

    this->update(0);
}

void BuneyFleeForeverState::update(float delta_time)
{
    vector<Vertex*> neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);

    while (neighbours.size() > 0) {
        Vertex* flee_candidate = RANDOM.choice(neighbours);

        if (!this->_context._cow_is_in_range_of_vertex(flee_candidate)) {
            this->_context._move_to_vertex(flee_candidate);
            return;
        } else {
            // I think this is one of the flaws of the STL. A "remove by value" statement should not be this long or unintuitive
            // Sure, I could make a generic free function for this, but I'd have just another Util class to move around with
            // me in C++ projects.
            neighbours.erase(std::remove(neighbours.begin(), neighbours.end(), flee_candidate), neighbours.end());
        }
    }

    // quality code right here mi frend
    neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);
    this->_context._move_to_vertex(RANDOM.choice(neighbours));
    // If we get here and there is no way to escape from the Cow, the Buney accepts his fate and idles
}
