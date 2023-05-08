//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


namespace array{
    class Graph {
    private:
        int** edges;
        int vertexCount;
    public:
        Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);
    };

}


#endif //DATASTRUCTURES_CPP_GRAPH_H
