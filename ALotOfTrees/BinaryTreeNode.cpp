#include "BinaryTreeNode.h"


template<typename T>
BinaryTreeNode<T>::BinaryTreeNode()
{
}

template<typename T>
BinaryTreeNode<T>::BinaryTreeNode(const T & _data)
    : data(_data)
{
}

template<typename T>
BinaryTreeNode<T>::~BinaryTreeNode()
{
}
