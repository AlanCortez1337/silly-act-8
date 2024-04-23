#ifndef BST_FIND_PRE_TPP
#define BST_FIND_PRE_TPP

template <typename T>
std::shared_ptr<TreeNode<T>> BST<T>::findPredecessor(TreeNode<T> node) {
    // ⭐TODO: Find the predecessor iteratively and return the node pointer
    std::shared_ptr<TreeNode<T>> placeholder_node = node->left_;

    while (!placeholder_node->right_) {
        placeholder_node = placeholder_node->right_;
    }
    
    return placeholder_node;
}

#endif // BST_FIND_PRE_TPP
