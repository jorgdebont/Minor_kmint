//
// Created by jazula on 11/15/16.
//

#ifndef MINOR_KMINT_COW_HPP
#define MINOR_KMINT_COW_HPP

#include "../IGameObject.h"
#include "Vertex.hpp"
#include "Graph.hpp"

class Cow : public IGameObject {

public:
    Cow(Graph& _graph);

    virtual ~Cow();

//    virtual void Draw() override;

    virtual void Update(float deltaTime) override;

    Vertex* current_vertex;

private:
    Graph& _graph;
};


#endif //MINOR_KMINT_COW_HPP
