//
// Created by mafn on 12/2/16.
//

#ifndef MINOR_KMINT_IDLESTATE_HPP
#define MINOR_KMINT_IDLESTATE_HPP


#include "BuneyState.hpp"

class Buney;

class IdleState : public BuneyState {
public:
    IdleState(Buney& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_IDLESTATE_HPP
