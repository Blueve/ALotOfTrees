#include "RBTree.h"


template<typename T>
void RBTree<T>::LeftRotate(std::shared_ptr<RBTreeNode<T>> x)
{
    auto y = x->right;
    x->right = y->left;

    if (y->left != this->nil)
        y->left->parent = x;

    y->parent = x->parent;

    if (x->parent == this->nil)
        this->root = y;
    else if (x == x->parent->left)
        x->parent->left = y;
    else
        x->parent->right = y;

    y->left = x;
    x->parent = y;
}

template<typename T>
void RBTree<T>::RightRotate(std::shared_ptr<RBTreeNode<T>> y)
{
    auto x = y->left;
    y->left = x->right;

    if (x->right != this->nil)
        x->right->parent = y;

    x->parent = y->parnet;

    if (y->parent == this->nil)
        this->root = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else
        y->parent->right = x;

    x->right = y;
    y->parent = x;
}

template<typename T>
void RBTree<T>::InsertFixup(std::shared_ptr<RBTreeNode<T>>)
{
}

template <typename T>
RBTree<T>::RBTree()
{
}

template<typename T>
void RBTree<T>::Insert(const T &node)
{
}

template<typename T>
void RBTree<T>::Delete(const std::shared_ptr<RBTreeNode<T>> node)
{
}

template <typename T>
RBTree<T>::~RBTree()
{
}
