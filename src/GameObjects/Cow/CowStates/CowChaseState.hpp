//
// Created by mafn on 12/1/16.
//

#ifndef MINOR_KMINT_COWCHASESTATE_HPP
#define MINOR_KMINT_COWCHASESTATE_HPP


#include "CowState.hpp"

class CowChaseState : public CowState {
public:
    CowChaseState(Cow& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_COWCHASESTATE_HPP
