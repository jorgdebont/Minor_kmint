//
// Created by mafn on 12/5/16.
//

#ifndef MINOR_KMINT_BUNEYFLEEFOREVERSTATE_HPP
#define MINOR_KMINT_BUNEYFLEEFOREVERSTATE_HPP


#include "BuneyState.hpp"
#include "../../../graph/Vertex.hpp"

class Buney;

class BuneyFleeForeverState : public BuneyState {
public:
    BuneyFleeForeverState(Buney& context);

    void update(float delta_time) override;

    bool is_safe_vertex(Vertex* to_check);

private:
};


#endif //MINOR_KMINT_BUNEYFLEEFOREVERSTATE_HPP
