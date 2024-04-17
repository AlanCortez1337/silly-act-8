#include <memory>

template <typename T>
struct TreeNode
{
    TreeNode(T value) : value_(value), left_(nullptr), right_(nullptr), parent_(nullptr) {}

    std::shared_ptr<TreeNode<T>> left_;
    std::shared_ptr<TreeNode<T>> right_;
    std::shared_ptr<TreeNode<T>> parent_;
    T value_;
};