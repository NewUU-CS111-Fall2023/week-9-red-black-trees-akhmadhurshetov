/*
 * Author: Axmad Xurshetov
 * Date: 13.12.2023
 * Name: task 3
 */
#ifndef TASK_3_H
#define TASK_3_H

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

    void Insert(int x);
    void printTreeRecursively(Node* node, std::string colorStr);
    void printTree();
    void leftRotate(Node* x);
    void rightRotate(Node* x);
    void deleteNode(int x);
    void insertFix(Node* x);
    void deleteFix(Node* x);
};

#endif