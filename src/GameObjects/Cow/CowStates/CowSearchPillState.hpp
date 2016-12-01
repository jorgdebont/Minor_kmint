//
// Created by mafn on 12/1/16.
//

#ifndef MINOR_KMINT_COWSEARCHPILLSTATE_HPP
#define MINOR_KMINT_COWSEARCHPILLSTATE_HPP


#include "CowState.hpp"

class Cow;

class CowSearchPillState : public CowState {
public:
    CowSearchPillState(Cow& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_COWSEARCHPILLSTATE_HPP
