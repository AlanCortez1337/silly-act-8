#ifndef BST_HEIGHT_TPP
#define BST_HEIGHT_TPP
template <typename T>
int BST<T>::height(std::shared_ptr<TreeNode<T>> Node) {
   // ⭐TODO: return the height of the node, return 0 if its nullptr
   if (Node == nullptr) { //return 0 height of nullptr
      return 0;
   }
   return Node->height_;
   
}

#endif // BST_HEIGHT_TPP
