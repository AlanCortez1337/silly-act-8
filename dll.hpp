#ifndef DLL_HPP
#define DLL_HPP
#include "node.hpp"

template <typename T>
class DLL {
    public:
        // Constructor
        DLL() : head_(nullptr), tail_(nullptr) {}

        void push_front(T newHead);

        // ⭐TODO: Using your knowledge from the activity and the add function, finish the function below to remove the first element of the SLL
        void pop_front()
        {
            
        }

        // ⭐TODO: Using your knowledge from the activity and the add function, finish the function below to remove the first element of the SLL
        void pop_back()
        {
            
        }

        // ⭐TODO: Loop through the entire SLL and add the element to the back of the SLL
        void push_back(T value)
        {
            
        }

        // ⭐TODO: Loop through the entire SLL and display each value
        // ➕ADDITIONALLY: print what is the head SLL in a new line and the size of the elements in a new line
        void display()
        {
            
        }

        // ⭐TODO: Finish the function below so that it inserts the value before the target location
        void insert(T value, T index)
        {
            
        }

        // ⭐TODO: Finish the function below so that it inserts the value before the target location
        void deleteValue(T value)
        {
            
        }

        std::shared_ptr<Node<T>> get(T value) {

        }

        void set(T value, T target) {

        }

    private:
        std::shared_ptr<Node<T>> head_;
        std::shared_ptr<Node<T>> tail_;
};

#endif // DLL_HPP