#ifndef BST_DELETE_TPP
#define BST_DELETE_TPP

template <typename T>
void BST<T>::remove(T value) {
    // ⚠️BEFORE FINISHING THIS FUNCTION YOU NEED TO COMPLETE findPredecessor.tpp and findSuccessor.tpp
    // ⭐TODO: Using the BST's deletion rules
    // 1. check how many nodes there are
    // 2. find the predecessor if you need 
    // 3. delete the node how you see fit (draw it out!)

    std::shared_ptr<TreeNode<T>> find_node = find(value);

    //leaf node
    if ((!find_node->left_) && (!find_node->right_)) {
        if (find_node->value_ > find_node->parent_->value) {
            find_node->parent_->right_ = nullptr;
        } else {
            find_node->parent_->left_ = nullptr;
        }
        find_node->parent_ = nullptr;
    }
    
}

#endif // BST_DELETE_TPP
