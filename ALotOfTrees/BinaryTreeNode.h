#pragma once
#include <memory>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    std::shared_ptr<BinaryTreeNode> left, right;

    BinaryTreeNode();
    BinaryTreeNode(const T&);
    virtual ~BinaryTreeNode();
};

