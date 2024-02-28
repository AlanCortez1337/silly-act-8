#ifndef FIND_TPP
#define FIND_TPP
#include <iostream>

template <typename T>
std::shared_ptr<Node<T>> DLL<T>::find(T target) {
    std::shared_ptr<Node <T>> temp_ptr = head_;
    while (temp_ptr != nullptr) {
        if (temp_ptr->value == target) {
            return temp_ptr;
        }
        temp_ptr = temp_ptr->next_;
    }
    return nullptr;
    
    // ⭐TODO: loop through the container and find the target value, return the a pointer to the node or nullptr if you cant find it
}

#endif // FIND_TPP
