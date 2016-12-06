//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_SUMMONERSRIFT_HPP
#define MINOR_KMINT_SUMMONERSRIFT_HPP


#include "Graph.hpp"
#include "../IGameObject.h"

class Cow;
class Buney;
class Pill;
class Weapon;

class SummonersRift : public IGameObject {
public:
    SummonersRift();

    Graph field;
    Cow* cow = nullptr;
    Buney* buney = nullptr;
    Pill* pill = nullptr;
    Weapon* weapon = nullptr;

    virtual void Draw() override;
    virtual void Update(float deltaTime) override;

private:

    const int _vertex_draw_width = 8;

    void _init_field();
    void _draw_vertices();
    void _draw_edges();
};


#endif //MINOR_KMINT_SUMMONERSRIFT_HPP
