#ifndef STACK_HPP
#define STACK_HPP
#include "dll.hpp"

template <typename T>
class Stack
{
public:
    Stack() : size_(0), container_() {}

    void push(T input);

    void pop();

    T top();

private:
    DLL<T> container_;
    std::size_t size_;
};

#include "./stack-methods/pop.tpp"
#include "./stack-methods/push.tpp"
#include "./stack-methods/top.tpp"

#endif // DLL_HPP