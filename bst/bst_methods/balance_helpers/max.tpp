#ifndef BST_MAX_TPP
#define BST_MAX_TPP
template <typename T>
int BST<T>::max(int h1, int h2) {
   // ⭐TODO: return the max value of the two parameters
   //if h1 is less than h2, return h2
   if(h1 < h2) {
      return h2;
   } else if (h1 > h2) { // if h1 is greater than h2, return h1
      return h1;
   } else { // if h1 is equal to h2, return h1
      return h1;
   }
}

#endif // BST_MAX_TPP
