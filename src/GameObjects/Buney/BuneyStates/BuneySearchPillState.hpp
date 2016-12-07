//
// Created by mafn on 12/6/16.
//

#ifndef MINOR_KMINT_BUNEYSEARCHPILLSTATE_HPP
#define MINOR_KMINT_BUNEYSEARCHPILLSTATE_HPP


#include "BuneyState.hpp"

class BuneySearchPillState : public BuneyState {
public:
    BuneySearchPillState(Buney& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_BUNEYSEARCHPILLSTATE_HPP
