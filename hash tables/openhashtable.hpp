#include <vector>
#ifndef OPEN_ADDRESSING_HASH_TABLE_HPP
#define OPEN_ADDRESSING_HASH_TABLE_HPP

template <typename T>
class OpenHashTable
{
public:
    OpenHashTable() : container_() {}

    void insert(T value);

    void remove(T value);

    T find(T value);

private:
    std::vector<T> container_;
};

#include "./open_addressing_methods/insert.tpp"
#include "./open_addressing_methods/remove.tpp"
#include "./open_addressing_methods/find.tpp"

#endif // OPEN_ADDRESSING_HASH_TABLE_HPP