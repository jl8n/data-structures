#pragma once

class Node {
public:
    Node();
    ~Node();
    int value;
    Node* left;
    Node* right;

};

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();
    void insertHelper(Node* currentNode, Node* newNode);
    void insert(int value);
    void traverse(Node* node);
    void printHelper(Node* currentNode, std::string indent, bool last);
    void print();
    Node* root;
    size_t size;
};