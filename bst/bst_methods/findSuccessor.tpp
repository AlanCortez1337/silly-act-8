#ifndef BST_FIND_SUC_TPP
#define BST_FIND_SUC_TPP

template <typename T>
std::shared_ptr<TreeNode<T>> BST<T>::findSuccessor(TreeNode<T> node) {
    // ⭐TODO: Find the successor iteratively and return the node pointer
    std::shared_ptr<TreeNode<T>> placeholder_node = node->right_;

    while (!placeholder_node->left_) {
        placeholder_node = placeholder_node->left_;
    }
    
    return placeholder_node;
}

#endif // BST_FIND_SUC_TPP
