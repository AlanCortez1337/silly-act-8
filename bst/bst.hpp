#ifndef BST_HPP
#define BST_HPP
#include "tree_node.hpp"
#include <memory>

template <typename T>
class BST {
    public:
        // Constructor
        BST() : root_(nullptr) {}

        // Insert member functions

        void insert(T value);

        // Delete member functions

        void remove(T value);

        // Misc member functions

        std::shared_ptr<TreeNode<T>> find(T target);
        std::shared_ptr<TreeNode<T>> findPredecessor(TreeNode<T> node);
        std::shared_ptr<TreeNode<T>> findSuccessor(TreeNode<T> node);

        void inorderPrint();

        int height(std::shared_ptr<TreeNode<T>> Node);
        int max(int h1, int h2);
        int getBalance(std::shared_ptr<TreeNode<T>> Node);
        std::shared_ptr<TreeNode<T>> leftRotation(std::shared_ptr<TreeNode<T>> unbalancedNode);
        std::shared_ptr<TreeNode<T>> rightRotation(std::shared_ptr<TreeNode<T>> unbalancedNode);

    private:
        std::shared_ptr<TreeNode<T>> find(std::shared_ptr<TreeNode<T>> curr, T target);
        void insert(std::shared_ptr<TreeNode<T>> curr, T value);
        void inorderPrint(std::shared_ptr<TreeNode<T>> curr);

        std::shared_ptr<TreeNode<T>> root_;
};

#include "./bst_methods/find.tpp"
#include "./bst_methods/insert.tpp"
#include "./bst_methods/remove.tpp"
#include "./bst_methods/findPredecessor.tpp"
#include "./bst_methods/findSuccessor.tpp"
#include "./bst_methods/inorderPrint.tpp"
#include "./bst_methods/balance_helpers/getBalance.tpp"
#include "./bst_methods/balance_helpers/height.tpp"
#include "./bst_methods/balance_helpers/leftRotate.tpp"
#include "./bst_methods/balance_helpers/rightRotate.tpp"
#include "./bst_methods/balance_helpers/max.tpp"

#endif // BST_HPP