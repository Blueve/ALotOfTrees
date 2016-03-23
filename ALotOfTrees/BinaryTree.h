#pragma once
#include <memory>
#include "BinaryTreeNode.h"

template <typename T>
class BinaryTree
{
protected:
    /* Root node */
    std::shared_ptr<BinaryTreeNode<T>> root;

public:
    BinaryTree();
    virtual ~BinaryTree();
};

