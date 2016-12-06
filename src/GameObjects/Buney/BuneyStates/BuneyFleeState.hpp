//
// Created by mafn on 12/6/16.
//

#ifndef MINOR_KMINT_BUNEYFLEE_HPP
#define MINOR_KMINT_BUNEYFLEE_HPP


#include "BuneyState.hpp"
#include "BuneyFleeForeverState.hpp"

class BuneyFleeState : public BuneyState {
public:
    BuneyFleeState(Buney& context);

    virtual void update(float delta_time) override;

private:
    BuneyFleeForeverState _flee_state;

    const int _length = 5;
    int _turn_counter;
};


#endif //MINOR_KMINT_BUNEYFLEE_HPP
