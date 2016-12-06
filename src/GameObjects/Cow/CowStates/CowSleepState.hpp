//
// Created by jazula on 12/6/16.
//

#ifndef MINOR_KMINT_COWSLEEPSTATE_HPP
#define MINOR_KMINT_COWSLEEPSTATE_HPP

#include "CowState.hpp"

class CowSleepState : public CowState {
public:
    CowSleepState(Cow& context);

    virtual void update(float delta_time) override;
private:
    int _turns_remaining;
};


#endif //MINOR_KMINT_COWSLEEPSTATE_HPP
