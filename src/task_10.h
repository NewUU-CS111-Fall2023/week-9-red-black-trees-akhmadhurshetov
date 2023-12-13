
/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 10
 */
#ifndef TASK_10_H
#define TASK_10_H

#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() : root(nullptr) {}

    void Insert(int x);
    void Delete(int x);
    void printInOrder(Node* node);
    int height(Node* node);
    int depth(Node* node, int x);
};

#endif