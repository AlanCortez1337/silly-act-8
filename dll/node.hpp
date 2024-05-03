#include <memory>

template <typename T>
struct Node
{
    Node(T value) : value_(value), next_(nullptr), prev_(nullptr) {}
    

    std::shared_ptr<Node<T>> next_;
    std::shared_ptr<Node<T>> prev_;

    T value_;
};