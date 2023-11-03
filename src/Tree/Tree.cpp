//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#include "Tree.h"
#include "Stack.h"
#include "Queue.h"

using namespace tree;

Tree::Tree() {
    root = nullptr;
}

TreeNode *Tree::getRoot() const{
    return root;
}

void Tree::setRoot(TreeNode *_root) {
    this->root = _root;
}

Tree::~Tree() {
    delete root;
}

TreeNode *Tree::recursiveSearch(int value) {
    if (root != nullptr){
        return root->recursiveSearch(value);
    } else {
        return nullptr;
    }
}

TreeNode *Tree::iterativeSearch(int value) {
    TreeNode *tmp = root;
    while (tmp != nullptr){
        if (value < tmp->getData()){
            tmp = tmp->getLeft();
        } else {
            if (value > tmp->getData()){
                tmp = tmp->getRight();
            } else {
                return tmp;
            }
        }
    }
    return nullptr;
}

TreeNode *Tree::iterativeMinSearch() {
    TreeNode* tmp = root;
    TreeNode* parent = nullptr;
    while (tmp != nullptr) {
        parent = tmp;
        tmp = tmp->getLeft();
    }
    return parent;
}

TreeNode *Tree::iterativeMaxSearch() {
    TreeNode* tmp = root;
    while (tmp != nullptr) {
        if (tmp->getRight() == nullptr){
            return tmp;
        }
        tmp = tmp->getRight();
    }
    return nullptr;
}

TreeNode *Tree::recursiveMinSearch() {
    if (root != nullptr){
        return root->recursiveMinSearch();
    }
    return nullptr;
}

TreeNode *Tree::recursiveMaxSearch() {
    if (root != nullptr){
        return root->recursiveMaxSearch();
    }
    return nullptr;
}

void Tree::inorder() {
    if (root != nullptr){
        root->inorder();
    }
}

void Tree::preorder() {
    if (root != nullptr){
        root->preorder();
    }
}

void Tree::postorder() {
    if (root != nullptr){
        root->postorder();
    }
}

void Tree::iterativeInsert(TreeNode *node) {
    TreeNode *parent = nullptr;
    TreeNode *tmp = root;
    while (tmp != nullptr) {
        parent = tmp;
        if (node->getData() < tmp->getData()){
            tmp = tmp->getLeft();
        } else {
            tmp = tmp->getRight();
        }
    }
    insertChild(parent, node);
}

void Tree::prettyPrint() {
    if (root != nullptr){
        root->prettyPrint(0);
    }
}

void Tree::recursiveInsert(TreeNode *node) {
    if (root == nullptr){
        root = node;
    } else {
        root->recursiveInsert(node);
    }
}

int Tree::nodeCountWithStack() {
    TreeNode* tmp;
    int count = 0;
    Stack c = Stack(100);
    if (root != nullptr){
        c.push(Element(root));
    }
    while (!c.isEmpty()){
        Element e = c.pop();
        count++;
        tmp = e.getData();
        if (tmp->getLeft() != nullptr){
            c.push( Element(tmp->getLeft()));
        }
        if (tmp->getRight() != nullptr){
            c.push(Element(tmp->getRight()));
        }
    }
    return count;
}

int Tree::nodeCountWithQueue() {
    TreeNode* tmp;
    int count = 0;
    Queue c = Queue(100);
    if (root != nullptr){
        c.enqueue(Element(root));
    }
    while (!c.isEmpty()){
        Element e = c.dequeue();
        count++;
        tmp = e.getData();
        if (tmp->getLeft() != nullptr){
            c.enqueue(Element(tmp->getLeft()));
        }
        if (tmp->getRight() != nullptr){
            c.enqueue(Element(tmp->getRight()));
        }
    }
    return count;
}

void Tree::insertChild(TreeNode *parent, TreeNode *child) {
    if (parent == nullptr) {
        root = child;
    } else {
        if (child->getData() < parent->getData()) {
            parent->setLeft(child);
        } else {
            parent->setRight(child);
        }
    }
}

void Tree::deleteNode(int value) {
    TreeNode *y = nullptr, *x = root, *parent = nullptr;
    while (x->getData() != value){
        parent = x;
        if (x->getData() > value){
            x = x->getLeft();
        } else {
            x = x->getRight();
        }
    }
    while (true){
        if (x->getLeft() != nullptr){
            y = x->getLeft()->recursiveMaxSearch();
            parent = x;
            if (parent->getLeft() != y){
                parent = parent->getLeft();
                while (parent->getRight() != y){
                    parent = parent->getRight();
                }
            }
        }
        if (y == nullptr && x->getRight() != nullptr){
            y = x->getRight()->recursiveMinSearch();
            parent = x;
            if (parent->getRight() != y){
                parent = parent->getRight();
                while (parent->getLeft() != y){
                    parent = parent->getLeft();
                }
            }
        }
        if (y == nullptr){
            if (parent->getLeft() == x){
                parent->setLeft(nullptr);
            } else {
                parent->setRight(nullptr);
            }
            break;
        }
        x->setData(y->getData());
        x = y;
        y = nullptr;
    }
}
