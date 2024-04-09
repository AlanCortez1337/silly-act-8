#include <memory>

template <typename T>
struct Node
{
    Node(T value) : value_(value), left_(nullptr), right_(nullptr), parent_(nullptr) {}

    std::shared_ptr<Node<T>> left_;
    std::shared_ptr<Node<T>> right_;
    std::shared_ptr<Node<T>> parent_;
    T value_;
};