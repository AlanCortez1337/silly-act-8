#ifndef BST_FIND_PRE_TPP
#define BST_FIND_PRE_TPP

template <typename T>
std::shared_ptr<Node<T>> BST<T>::findPredecessor(std::shared_ptr<Node<T>> node) {
    // ⭐TODO: Find the predecessor iteratively and return the node pointer
    std::shared_ptr<Node<T>> placeholder_node = node->left_;

    while (!placeholder_node->right) {
        placeholder_node = placeholder_node->right;
    }
    
    return placeholder_node;
}

#endif // BST_FIND_PRE_TPP
