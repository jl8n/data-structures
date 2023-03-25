#include <iostream>
#include "BinaryTree.h"

int main() {
    BinaryTree btree;
    btree.insert(69);
    btree.insert(49);
    btree.insert(79);
    btree.insert(39);
    btree.insert(59);
    btree.print();
    return 0;
}