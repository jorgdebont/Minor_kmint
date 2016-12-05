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

}

void BuneyFleeForeverState::update(float delta_time)
{
    vector<Vertex*> neighbours = this->_context._parent_field.field.get_vertex_neighbours(this->_context.current_position);

    while (neighbours.size() > 0) {
        Vertex* flee_candidate = RANDOM.choice(neighbours);

        if (this->is_safe_vertex(flee_candidate)) {
            this->_context._move_to_vertex(flee_candidate);
            break;
        } else {
            // I think this is one of the flaws of the STL. A "remove by value" statement should not be this long or unintuitive
            // Sure, I could make a generic free function for this, but I'd have just another Util class to move around with
            // me in C++ projects.
            neighbours.erase(std::remove(neighbours.begin(), neighbours.end(), flee_candidate), neighbours.end());
        }
    }

    // If we get here and there is no way to escape from the Cow, the Buney accepts his fate and idles
}

bool BuneyFleeForeverState::is_safe_vertex(Vertex* to_check)
{
    // Check whether the cow is on the vertex
    if (this->_context._parent_field.cow->is_on_position(to_check)) {
        return false;
    }

    // Check whether the cow is on neighbouring vertices (since it could then directly step on us)
    vector<Vertex*> to_check_neighbours = this->_context._parent_field.field.get_vertex_neighbours(to_check);
    for (Vertex* to_check_neighbour : to_check_neighbours) {
        if (this->_context._parent_field.cow->is_on_position(to_check_neighbour)) {
            return false;
        }
    }

    // If we get here, the cow is neither on to_check or it's neighbouring vertices
    return true;
}
