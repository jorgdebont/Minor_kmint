//
// Created by jazula on 12/6/16.
//

#ifndef MINOR_KMINT_BUNEYATTACKSTATE_HPP
#define MINOR_KMINT_BUNEYATTACKSTATE_HPP

#include "BuneyState.hpp"
#include "../../../graph/Vertex.hpp"

class BuneyAttackState : public BuneyState {
public:
    BuneyAttackState(Buney& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_BUNEYATTACKSTATE_HPP
