#pragma once
#include "BinaryTreeNode.h"

typedef unsigned char rbtree_color;

template <typename T>
class RBTreeNode : 
    public BinaryTreeNode<T>
{
    /* Node's color */
    rbtree_color color;
public:
    /* Parent */
    std::shared_ptr<RBTreeNode<T>> parent;

	RBTreeNode();
	RBTreeNode(const T&);

	~RBTreeNode();
};

