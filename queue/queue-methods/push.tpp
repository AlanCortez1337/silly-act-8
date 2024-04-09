#ifndef Q_PUSH_TPP
#define Q_PUSH_TPP
#include "queue.hpp"

template <typename T>
void Queue<T>::push(T input) {
    // ⭐TODO: Add an element to the container
    container_.push_back(input);
    return;
}

#endif // Q_PUSH_TPP
