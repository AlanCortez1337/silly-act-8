#ifndef BST_FIND_TPP
#define BST_FIND_TPP

// ⭐TODO: Think about which function needs to be used to loop, 

template <typename T>
std::shared_ptr<TreeNode<T>> BST<T>::find(std::shared_ptr<TreeNode<T>> curr, T target) {
  if (curr->value_ > target) {
    if (curr->left_ == nullptr) {
        return curr;
    } else {
      return BST<T>::find(curr->left_, target);
    }
  } else {
    if (curr->right_ == nullptr) {
        return curr;
    }
    return BST<T>::find(curr->right_, target);
  } 
}

template <typename T>
std::shared_ptr<TreeNode<T>> BST<T>::find(T target) {
    if (!root_) {
      return root_;
    }
    
    return BST<T>::find(root_, target);
}

#endif // BST_FIND_TPP
