//
// Created by Olcay Taner YILDIZ on 15.05.2023.
//

#include <climits>
#include "AbstractGraph.h"
#include "../Array/DisjointSet.h"
#include "../List/Graph/Edge.h"

AbstractGraph::AbstractGraph(int vertexCount) {
    this->vertexCount = vertexCount;
}

Path *AbstractGraph::initializePaths(int source) const {
    Path* paths = new Path[vertexCount];
    for (int i = 0; i < vertexCount; i++){
        paths[i] = Path(INT_MAX, -1);
    }
    paths[source].setDistance(0);
    return paths;
}

int AbstractGraph::connectedComponentDfs() {
    int component = 0;
    bool* visited = new bool[vertexCount];
    for (int vertex = 0; vertex < vertexCount; vertex++){
        if (!visited[vertex]){
            visited[vertex] = true;
            depthFirstSearch(visited, vertex);
            component++;
        }
    }
    delete[] visited;
    return component;
}

int AbstractGraph::connectedComponentBfs() {
    int component = 0;
    bool* visited = new bool[vertexCount];
    for (int vertex = 0; vertex < vertexCount; vertex++){
        if (!visited[vertex]){
            visited[vertex] = true;
            breadthFirstSearch(visited, vertex);
            component++;
        }
    }
    delete[] visited;
    return component;
}

void AbstractGraph::kruskal() {
    int edgeCount = 0, i, count;
    DisjointSet sets = DisjointSet(vertexCount);
    Edge* list = edgeList(count);
    i = 0;
    while (edgeCount < vertexCount - 1){
        int fromNode = list[i].getFrom();
        int toNode = list[i].getTo();
        if (sets.findSetRecursive(fromNode) != sets.findSetRecursive(toNode)){
            sets.unionOfSets(fromNode, toNode);
            edgeCount++;
        }
        i++;
    }
}