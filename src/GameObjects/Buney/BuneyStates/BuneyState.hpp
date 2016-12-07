//
// Created by mafn on 12/2/16.
//

#ifndef MINOR_KMINT_BUNEYSTATE_HPP
#define MINOR_KMINT_BUNEYSTATE_HPP

#include <string>

using std::string;

class Buney;

class BuneyState {
public:
    BuneyState(Buney& context);

    virtual void update(float delta_time) = 0;

    string name;
protected:
    Buney& _context;
};


#endif //MINOR_KMINT_BUNEYSTATE_HPP
