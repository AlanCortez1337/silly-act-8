#ifndef Q_POP_TPP
#define Q_POP_TPP
#include "queue.hpp"

template <typename T>
void Queue<T>::pop() {
    // ⭐TODO: Remove an element to the container
    container_.pop_front();
    return;
}

#endif // Q_POP_TPP
