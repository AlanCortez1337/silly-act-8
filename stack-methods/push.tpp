#ifndef PUSH_TPP
#define PUSH_TPP
#include "stack.hpp"

template <typename T>
void Stack<T>::push(T input) {
    // ⭐TODO: Add an element to the container
    container_.push_front(temp);
    return;
}

#endif // PUSH_TPP
