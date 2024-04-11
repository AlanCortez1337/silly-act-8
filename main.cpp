#include "./dll/dll.hpp"
#include "./stack/stack.hpp"
#include "./bst/bst.hpp"

int main() {

    BST<int> mytree;

    // Creating Tree
    mytree.insert(8);
    mytree.insert(14);
    mytree.insert(3);
    mytree.insert(27);
    mytree.insert(11);

    mytree.inorderPrint();

    // Deleting Node
    mytree.remove(14);
    mytree.inorderPrint();
    

    return 0;
}