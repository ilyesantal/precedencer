#pragma once

#include <string>

template <typename T> 
struct node {
    T value;
    node *left;
    node *right;
};

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();
    void insert(struct node value);
};