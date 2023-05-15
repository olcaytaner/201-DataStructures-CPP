//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "EdgeList.h"
#include "../../General/AbstractGraph.h"

namespace list {

    class Graph : public AbstractGraph{
    private:
        EdgeList *edges;
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
        void connectedComponentsDisjointSet();
        Path* bellmanFord(int source);
        Path* dijkstra(int source);
    };

}
#endif //DATASTRUCTURES_CPP_GRAPH_H
