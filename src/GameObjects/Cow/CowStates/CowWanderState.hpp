//
// Created by mafn on 12/1/16.
//

#ifndef MINOR_KMINT_COWWANDERSTATE_HPP
#define MINOR_KMINT_COWWANDERSTATE_HPP


#include "CowState.hpp"

class CowWanderState : public CowState {
public:
    CowWanderState(Cow& context);

    virtual void update(float delta_time) override;

private:
    const int _boredom_threshold = 20;
    int _boredom_counter = 0;
};


#endif //MINOR_KMINT_COWWANDERSTATE_HPP
