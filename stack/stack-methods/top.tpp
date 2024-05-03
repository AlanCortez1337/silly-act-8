#ifndef TOP_TPP
#define TOP_TPP

template <typename T>
T Stack<T>::top() {
    // ⭐TODO: get the top of the container
    // container_
    return container_->get_head()->value_;
}

#endif // TOP_TPP
