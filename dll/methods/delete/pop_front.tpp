#ifndef POP_FRONT_TPP
#define POP_FRONT_TPP
#include <memory>
#include <exception>

template <typename T>
void DLL<T>::pop_front() {
    // ⭐TODO: remove the first node
    if (head_ == nullptr) {
        throw "EMPTY"
    } else if (head_->next_ == nullptr) {
        head_ = nullptr;
        tail_ = nullptr;
    } else {
        head_ = head_->next_;
        head_->prev_ = nullptr
    }
    return;
}

#endif // POP_FRONT_TPP
