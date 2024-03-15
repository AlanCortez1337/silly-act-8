#ifndef FRONT_TPP
#define FRONT_TPP
#include "queue.hpp"

template <typename T>
T Queue<T>::front() {
    // ⭐TODO: get the front of the container
    container_.get_head();
    return;
}

#endif // FRONT_TPP
