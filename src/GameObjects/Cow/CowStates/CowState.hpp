//
// Created by mafn on 12/1/16.
//

#ifndef MINOR_KMINT_COWSTATE_HPP
#define MINOR_KMINT_COWSTATE_HPP

class Cow;

class CowState {
public:
    CowState(Cow& context);
    virtual void update(float delta_time) = 0;
protected:
    Cow& _context;
};


#endif //MINOR_KMINT_COWSTATE_HPP
