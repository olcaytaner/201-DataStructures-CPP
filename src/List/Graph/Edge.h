//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_EDGE_H
#define DATASTRUCTURES_CPP_EDGE_H


class Edge {
private:
    int to;
    int weight;
    Edge* next;
public:
    Edge(int to, int weight);
    void setNext(Edge* _next);
    Edge* getNext() const;
    int getTo() const;
    int getWeight() const;
};


#endif //DATASTRUCTURES_CPP_EDGE_H
