//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef DATASTRUCTURES_CPP_SET_H
#define DATASTRUCTURES_CPP_SET_H


class Set {
private:
    int data;
    int parent;
    int depth;
public:
    Set(int data, int index);
    Set();
    int getParent() const;
    int getDepth() const;
    void setParent(int parent);
    void incrementDepth();
};


#endif //DATASTRUCTURES_CPP_SET_H
