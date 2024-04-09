#ifndef DELETE_TPP
#define DELETE_TPP

template <typename T>
void DLL<T>::deleteValue(T value) {
    std::shared_ptr temp_ptr = find(value);
    if (temp_ptr == nullptr) {
        std::cout << "dummy.\n";
        return;
    } else {
        temp_ptr->next_->prev_ = temp_ptr->prev_;
        temp_ptr-prev_->next_ = temp_ptr->next_;
    }

    // ⭐TODO: Find the node with the same data as "value". 
    // If you do find it then remove that node.
}

#endif // DELETE_TPP
