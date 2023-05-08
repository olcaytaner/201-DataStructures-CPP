//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "Graph.h"

namespace array{

    Graph::Graph(int vertexCount) {
        this->vertexCount = vertexCount;
        this->edges = new int*[vertexCount];
        for (int i = 0; i < this->vertexCount; i++){
            this->edges[i] = new int[vertexCount];
        }
        for (int i = 0; i < vertexCount; i++){
            for (int j = 0; j < vertexCount; j++){
                edges[i][j] = 0;
            }
        }
    }

    Graph::~Graph() {
        for (int i = 0; i < this->vertexCount; i++){
            delete[] this->edges[i];
        }
        delete[] this->edges;
    }

    void Graph::addEdge(int from, int to) {
        edges[from][to] = 1;
    }

    void Graph::addEdge(int from, int to, int weight) {
        edges[from][to] = weight;
    }

}
