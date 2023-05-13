//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "EdgeList.h"

namespace list {

    class Graph {
    private:
        EdgeList *edges;
        int vertexCount;
        void depthFirstSearch(bool* visited, int fromNode);
        void breadthFirstSearch(bool* visited, int startNode);
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentsDisjointSet();
        int connectedComponentDfs();
        int connectedComponentBfs();
    };

}
#endif //DATASTRUCTURES_CPP_GRAPH_H
