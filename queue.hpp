#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "dll.hpp"

template <typename T>
class Queue
{
public:
    Queue() : size_(0), container_() {}

    void push(T input);

    void pop();

    T front();

private:
    DLL<T> container_;
    std::size_t size_;
};

#include "./queue-methods/pop.tpp"
#include "./queue-methods/push.tpp"
#include "./queue-methods/front.tpp"

#endif // QUEUE_HPP