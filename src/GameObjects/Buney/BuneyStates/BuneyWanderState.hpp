//
// Created by mafn on 12/5/16.
//

#ifndef MINOR_KMINT_BUNEYWANDERSTATE_HPP
#define MINOR_KMINT_BUNEYWANDERSTATE_HPP


#include "BuneyState.hpp"

class Buney;

class BuneyWanderState : public BuneyState {
public:
    BuneyWanderState(Buney& context);

    void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_BUNEYWANDERSTATE_HPP
