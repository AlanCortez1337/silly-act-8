#ifndef PUSH_FRONT_TPP
#define PUSH_FRONT_TPP

#include <memory>

template <typename T>
void DLL<T>::push_front(T value) {
        // ⭐TODO: create a new node with "value" as the data and insert it to the front of the linked list
        std::shared_ptr<Node<T>> front_node = std::make_shared <Node<T>> (value);

        if (head_ == nullptr) {
          head_ = front_node;
          tail_ = front_node;
        } else {
          head_->prev_ = front_node;
          front_node->next_ = head_;
          head_ = front_node;
        }
  return;
}

#endif // PUSH_FRONT_TPP
