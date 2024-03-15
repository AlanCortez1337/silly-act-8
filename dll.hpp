#ifndef DLL_HPP
#define DLL_HPP
#include "node.hpp"
#include <memory>

template <typename T>
class DLL {
    public:
        // Constructor
        DLL() : head_(nullptr), tail_(nullptr) {}

        // Insert member functions
        void push_front(T value);

        void push_back(T value);

        void insert(T value, T target);

        // Delete member functions
        void pop_front();

        void pop_back();

        void deleteValue(T value);

        // Misc member functions
        // T get_head() // return head_ value

        void display();

        void reverse();

        std::shared_ptr<Node<T>> find(T target);

    private:
        std::shared_ptr<Node<T>> head_;
        std::shared_ptr<Node<T>> tail_;
};

#include "./methods/insert/push_front.tpp"
#include "./methods/insert/push_back.tpp"
#include "./methods/insert/insert.tpp"
#include "./methods/delete/pop_front.tpp"
#include "./methods/delete/pop_back.tpp"
#include "./methods/delete/delete.tpp"
#include "./methods/misc/display.tpp"
#include "./methods/misc/reverse.tpp"

#endif // DLL_HPP