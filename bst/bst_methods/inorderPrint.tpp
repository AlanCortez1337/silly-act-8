// post order
/*
    //left
    BST<T>::inorderPrint(curr->left_);
    //right
    BST<T>::inorderPrint(curr->right_);
    // visit
    std::cout << curr->value_ << std::endl;

*/

#include <iostream>
#ifndef BST_INORDER_PRINT_TPP
#define BST_INORDER_PRINT_TPP

template <typename T>
void BST<T>::inorderPrint(std::shared_ptr<TreeNode<T>> curr) {
    if(!curr) {
        return;
    }
    //left
    BST<T>::inorderPrint(curr->left_);
    // visit
    std::cout << curr->value_ << std::endl;
    //right
    BST<T>::inorderPrint(curr->right_);

}

template <typename T>
void BST<T>::inorderPrint() {
    BST<T>::inorderPrint(root_);
}

#endif // BST_INORDER_PRINT_TPP
