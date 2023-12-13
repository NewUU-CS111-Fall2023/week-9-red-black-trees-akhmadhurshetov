/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 5
 */
#ifndef TASK_5_H
#define TASK_5_H

#include <iostream>
#include <vector>

struct Node {
    int data;
    std::vector<Node*> children;
};

class NaryTree {
public:
    Node* root;

    NaryTree() : root(nullptr) {}

    void Insert(int parent, int child);
    void printChildrenCount();
};

#endif