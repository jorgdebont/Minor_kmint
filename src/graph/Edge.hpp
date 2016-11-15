//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_EDGE_HPP
#define MINOR_KMINT_EDGE_HPP


#include "Vertex.hpp"

class Edge {
public:
    Edge(Vertex* first, Vertex* second, int weight);

    Vertex* first;
    Vertex* second;

    int weight;
private:
};


#endif //MINOR_KMINT_EDGE_HPP
