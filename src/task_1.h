/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 1
 */
#ifndef TASK_1_H
#define TASK_1_H

#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node* parent;
    bool color; 

class RedBlackTree {
public:
    Node* root;

    RedBlackTree() : root(nullptr) {}

    void Insert(int x);
    void printTreeRecursively(Node* node, std::string colorStr);
    void printTree();
};

#endif