#ifndef POP_TPP
#define POP_TPP
#include "../stack.hpp"

template <typename T>
void Stack<T>::pop() {
    // ⭐TODO: Remove an element to the container
    container_.pop_front();
}

#endif // POP_TPP
