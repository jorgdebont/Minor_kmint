//
// Created by mafn on 11/15/16.
//

#include "Graph.hpp"

Graph::Graph()
{
}

void Graph::add_vertex(Vertex* vertex)
{
    this->_vertices.push_back(vertex);
}

void Graph::add_edge(Edge* edge)
{
    this->_edges.push_back(edge);
}

vector<Vertex*>& Graph::get_vertices()
{
    return this->_vertices;
}

vector<Edge*>& Graph::get_edges()
{
    return this->_edges;
}
