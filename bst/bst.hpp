#ifndef BST_HPP
#define BST_HPP
#include "node.hpp"
#include <memory>

template <typename T>
class BST {
    public:
        // Constructor
        BST() : root_(nullptr) {}

        // Insert member functions

        void insert(T value);

        // Delete member functions

        void predecessorDelete(T value);

        void successorDelete(T value);

        // Misc member functions

        std::shared_ptr<Node<T>> find(T target);

        void inorderPrint();

    private:
        std::shared_ptr<Node<T>> root_;
};

#include "./bst_methods/find.tpp"
#include "./bst_methods/insert.tpp"
#include "./bst_methods/predecessorDelete.tpp"
#include "./bst_methods/successorDelete.tpp"
#include "./bst_methods/inorderPrint.tpp"

#endif // BST_HPP