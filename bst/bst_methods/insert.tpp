#ifndef BST_INSERT_TPP
#define BST_INSERT_TPP

template <typename T>
void BST<T>::insert(T value) {
    // ⭐TODO: Using the BST's rules, insert the value into the BST
    std::shared_ptr<TreeNode<T>> find_node = find(value);
    std::shared_ptr<TreeNode<T>> new_node = std::make_shared<TreeNode<T>> (value);

    if (find_node->value_ < value ) {
        find_node->right_ = new_node;
        find_node->right_->parent_ = find_node;
        // new_node->parent_ = find_node; 
    } else {
        find_node->left_ = new_node;
        find_node->left_->parent_ = find_node;
    }
}

#endif // BST_INSERT_TPP
