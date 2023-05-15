//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "Graph.h"
#include "../../Array/DisjointSet.h"
#include "../Queue.h"
#include "../../Array/Heap.h"

namespace list {

    Graph::Graph(int _vertexCount) : AbstractGraph(_vertexCount){
        edges = new EdgeList[vertexCount];
        for (int i = 0; i < vertexCount; i++) {
            edges[i] = EdgeList();
        }
    }

    void Graph::addEdge(int from, int to) {
        Edge* edge = new Edge(to, 1);
        edges[from].insert(edge);
    }

    void Graph::addEdge(int from, int to, int weight) {
        Edge* edge = new Edge(to, weight);
        edges[from].insert(edge);
    }

    Graph::~Graph() {
        delete[] edges;
    }

    void Graph::connectedComponentsDisjointSet() {
        Edge* edge;
        int toNode;
        DisjointSet sets = DisjointSet(vertexCount);
        for (int fromNode = 0; fromNode < vertexCount; fromNode++){
            edge = edges[fromNode].getHead();
            while (edge != nullptr){
                toNode = edge->getTo();
                if (sets.findSetRecursive(fromNode) != sets.findSetRecursive(toNode)){
                    sets.unionOfSets(fromNode, toNode);
                }
                edge = edge->getNext();
            }
        }
    }

    void Graph::depthFirstSearch(bool *visited, int fromNode) {
        Edge* edge;
        int toNode;
        edge = edges[fromNode].getHead();
        while (edge != nullptr){
            toNode = edge->getTo();
            if (!visited[toNode]){
                visited[toNode] = true;
                depthFirstSearch(visited, toNode);
            }
            edge = edge->getNext();
        }
    }

    void Graph::breadthFirstSearch(bool *visited, int startNode) {
        Edge* edge;
        int fromNode, toNode;
        Queue queue = Queue();
        queue.enqueue(new Node(startNode));
        while (!queue.isEmpty()){
            fromNode = queue.dequeue()->getData();
            edge = edges[fromNode].getHead();
            while (edge != nullptr) {
                toNode = edge->getTo();
                if (!visited[toNode]){
                    visited[toNode] = true;
                    queue.enqueue(new Node(toNode));
                }
                edge = edge->getNext();
            }
        }
    }

    Path *Graph::bellmanFord(int source) {
        Edge* edge;
        Path* shortestPaths = initializePaths(source);
        for (int i = 0; i < vertexCount - 1; i++){
            for (int fromNode = 0; fromNode < vertexCount; fromNode++){
                edge = edges[fromNode].getHead();
                while (edge != nullptr){
                    int toNode = edge->getTo();
                    int newDistance = shortestPaths[fromNode].getDistance() + edge->getWeight();
                    if (newDistance < shortestPaths[toNode].getDistance()){
                        shortestPaths[toNode].setDistance(newDistance);
                        shortestPaths[toNode].setPrevious(fromNode);
                    }
                    edge = edge->getNext();
                }
            }
        }
        return shortestPaths;
    }

    Path *Graph::dijkstra(int source) {
        Edge* edge;
        Path* shortestPaths = initializePaths(source);
        Heap heap = Heap(vertexCount);
        for (int i = 0; i < vertexCount; i++){
            heap.insert(HeapNode(shortestPaths[i].getDistance(), i));
        }
        while (!heap.isEmpty()){
            HeapNode node = heap.deleteMax();
            int fromNode = node.getName();
            edge = edges[fromNode].getHead();
            while (edge != nullptr){
                int toNode = edge->getTo();
                int newDistance = shortestPaths[fromNode].getDistance() + edge->getWeight();
                if (newDistance < shortestPaths[toNode].getDistance()){
                    int position = heap.search(toNode);
                    heap.update(position, newDistance);
                    shortestPaths[toNode].setDistance(newDistance);
                    shortestPaths[toNode].setPrevious(fromNode);
                }
                edge = edge->getNext();
            }
        }
        return shortestPaths;
    }

}