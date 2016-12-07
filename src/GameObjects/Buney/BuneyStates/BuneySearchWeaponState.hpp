//
// Created by mafn on 12/6/16.
//

#ifndef MINOR_KMINT_BUNEYSEARCHWEAPONSTATE_HPP
#define MINOR_KMINT_BUNEYSEARCHWEAPONSTATE_HPP


#include "BuneyState.hpp"

class BuneySearchWeaponState : public BuneyState {
public:
    BuneySearchWeaponState(Buney& context);

    virtual void update(float delta_time) override;

private:
};


#endif //MINOR_KMINT_BUNEYSEARCHWEAPONSTATE_HPP
