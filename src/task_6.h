/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 6
 */
#ifndef TASK_6_H
#define TASK_6_H

#include <iostream>
#include <vector>

struct Node {
    int data;
    std::vector<Node*> children;
    bool color; 
};

class RedBlackTree {
public:
    Node* root;

    RedBlackTree() : root(nullptr) {}

    void Insert(int parent, int child);
    int BlackHeight(Node* node);
    void printChildrenCount();
};

#endif