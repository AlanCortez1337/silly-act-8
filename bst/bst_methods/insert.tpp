#ifndef BST_INSERT_TPP
#define BST_INSERT_TPP

template <typename T>
void BST<T>::insert(T value) {
    // ⭐TODO: Using the BST's rules, insert the value into the BST
    if (root_->value_ < value) {
        BST<T>::insert(root->right_)
    }
}

#endif // BST_INSERT_TPP
