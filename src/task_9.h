/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 9
 */
#ifndef TASK_9_H
#define TASK_9_H

#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
    bool color; 
};

class RedBlackTree {
public:
    Node* root;

    RedBlackTree() : root(nullptr) {}

    void Insert(int parent, int child);
    int countNodes(Node* node);
    void printSubtreeNodeCount();
};

#endif