//
// Created by mafn on 12/1/16.
//

#ifndef MINOR_KMINT_COWSTATE_HPP
#define MINOR_KMINT_COWSTATE_HPP

#include <string>

using std::string;

class Cow;

class CowState {
public:
    CowState(Cow& context);
    virtual void update(float delta_time) = 0;

    string name;
protected:
    Cow& _context;
};


#endif //MINOR_KMINT_COWSTATE_HPP
