#ifndef BST_NODE_H
#define BST_NODE_H

class Node {
public:
    Node *left, *right;

    Node() { left = right = nullptr; }

    ~Node() {
        delete left;
        left = nullptr;
        delete right;
        right = nullptr;
    }
};

#endif
