#include <iostream>
#include "BinaryTree.h"

Node::Node() {
}

Node::~Node() {
}

BinaryTree::BinaryTree() : root(nullptr), size(0) {
    std::cout << "Binary Tree created" << std::endl;
}

BinaryTree::~BinaryTree() {
    std::cout << "Binary Tree destroyed" << std::endl;
}

void BinaryTree::traverse(Node* currentNode) {
    if (currentNode == nullptr) {
        return;  // base case
    }

    // post-order traversal
    //traverse(currentNode->left);
    //traverse(currentNode->right);
    
}

void BinaryTree::insertHelper(Node* currentNode, Node* newNode) {
    // code to traverse the tree and find the right place to insert the new node
    std::cout << currentNode->value << " " << newNode->value << std::endl;


    if (newNode->value < currentNode->value) {
        // new value is less than the current value
        if (currentNode->left == nullptr) {
            // hit the bottom of the left branch
            // insert newNode to the left of currentNode
            currentNode->left = newNode;
        } else {
            // left branch contains a node, make that the new currentNode
            insertHelper(currentNode->left, newNode);
        }
    } else  {
        // new value is greater than *or equal* to the current value
        if (currentNode->right == nullptr) {
            // hit the bottom of the right branch
            // insert newNode to the right of currentNode
            currentNode->right = newNode;
        } else {
            // right branch contains a node, make that the new currentNode
            insertHelper(currentNode->right, newNode);
        }
    }
}

void BinaryTree::insert(int value) {
    std::cout << "inserting " << value << std::endl;
    Node* newNode = new Node();
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (root == nullptr) {
        root = newNode;
        return;
    }

    insertHelper(root, newNode);
}


void BinaryTree::print() {
    std::cout << std::endl;
    if (root == nullptr) {
        std::cout << "Tree is empty" << std::endl;
        return;
    }
}