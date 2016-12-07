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

private:
};


#endif //MINOR_KMINT_BUNEYFLEEFOREVERSTATE_HPP
