#include "RBTreeNode.h"


template<typename T>
RBTreeNode<T>::RBTreeNode()
{
}

template<typename T>
RBTreeNode<T>::RBTreeNode(const T & _data)
    : BinaryTreeNode(_data)
{
}

template<typename T>
RBTreeNode<T>::~RBTreeNode()
{
}
