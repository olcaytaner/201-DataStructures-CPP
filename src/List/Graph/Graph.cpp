//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "Graph.h"

namespace list {

    Graph::Graph(int _vertexCount) {
        edges = new EdgeList[vertexCount];
        for (int i = 0; i < vertexCount; i++) {
            edges[i] = EdgeList();
        }
        this->vertexCount = _vertexCount;
    }

    void Graph::addEdge(int from, int to) {
        Edge* edge = new Edge(to, 1);
        edges[from].addEdge(edge);
    }

    void Graph::addEdge(int from, int to, int weight) {
        Edge* edge = new Edge(to, weight);
        edges[from].addEdge(edge);
    }

}