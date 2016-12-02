//
// Created by mafn on 12/2/16.
//

#ifndef MINOR_KMINT_BUNEYSTATE_HPP
#define MINOR_KMINT_BUNEYSTATE_HPP


class Buney;

class BuneyState {
public:
    BuneyState(Buney& context);

    virtual void update(float delta_time) = 0;
private:
    Buney& _context;
};


#endif //MINOR_KMINT_BUNEYSTATE_HPP
