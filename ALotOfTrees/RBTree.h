#pragma once
#include <memory>
#include "BinaryTree.h"
#include "RBTreeNode.h"



template <typename T>
class RBTree :
    public BinaryTree<T>
{
    std::shared_ptr<RBTreeNode<T>> nil;

    void LeftRotate(std::shared_ptr<RBTreeNode<T>>);
    void RightRotate(std::shared_ptr<RBTreeNode<T>>);
    void InsertFixup(std::shared_ptr<RBTreeNode<T>>);
public:
    RBTree();

    void Insert(const T&);
    void Delete(const std::shared_ptr<RBTreeNode<T>>);

    ~RBTree();
};

