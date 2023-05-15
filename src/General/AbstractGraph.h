//
// Created by Olcay Taner YILDIZ on 15.05.2023.
//

#ifndef DATASTRUCTURES_CPP_ABSTRACTGRAPH_H
#define DATASTRUCTURES_CPP_ABSTRACTGRAPH_H


#include "Path.h"

class AbstractGraph {
protected:
    int vertexCount;
    virtual void depthFirstSearch(bool* visited, int fromNode) = 0;
    virtual void breadthFirstSearch(bool* visited, int startNode) = 0;
    Path* initializePaths(int source);
public:
    AbstractGraph(int vertexCount);
    int connectedComponentDfs();
    int connectedComponentBfs();
};


#endif //DATASTRUCTURES_CPP_ABSTRACTGRAPH_H
