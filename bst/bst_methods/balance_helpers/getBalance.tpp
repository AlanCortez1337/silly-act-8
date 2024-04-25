#ifndef BST_GET_BF_TPP
#define BST_GET_BF_TPP
template <typename T>
int BST<T>::getBalance(std::shared_ptr<TreeNode<T>> Node) {
   // ⭐TODO: return the Balance Factor of a node utilizing the heights of their children
   //have a node, get the heights of both children of Node
   // if Node is nullptr, then return 0 balance factor
   if(!Node) { 
      return 0;
   }
   // if Node isn't null,
   //then return the difference between L & R child heights
   return (Node->left_->height_ - Node->right_->height_); 
}

#endif // BST_GET_BF_TPP
