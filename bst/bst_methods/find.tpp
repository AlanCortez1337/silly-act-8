#ifndef BST_FIND_TPP
#define BST_FIND_TPP

// ⭐TODO: Think about which function needs to be used to loop, 

template <typename T>
std::shared_ptr<Node<T>> BST<T>::find(std::shared_ptr<Node<T>> curr, T target) {
  if (!curr->next){
    return curr;
  }

  if (curr->val > target) {
    if (curr->left == nullptr) {
        return BST<T>::find(curr, target);
    } 
    BST<T>::find(curr->left, target);
    } 
  else if (curr->val < target) {
    if (curr->right == nullptr) {
        return BST<T>::find(curr, target);
    }
    BST<T>::find(curr->right, target);
    } 
}

template <typename T>
std::shared_ptr<Node<T>> BST<T>::find(T target) {
    
}

#endif // BST_FIND_TPP
