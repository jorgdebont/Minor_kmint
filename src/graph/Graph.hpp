//
// Created by mafn on 11/15/16.
//

#ifndef MINOR_KMINT_GRAPH_HPP
#define MINOR_KMINT_GRAPH_HPP

#include <vector>

#include "Vertex.hpp"
#include "Edge.hpp"

using std::vector;

class Graph {
public:
    Graph();

    void add_vertex(Vertex* vertex);
    void add_edge(Edge* edge);
    vector<Vertex*>& get_vertices();
    vector<Edge*>& get_edges();
private:
    vector<Vertex*> _vertices;
    vector<Edge*> _edges;
};


#endif //MINOR_KMINT_GRAPH_HPP
