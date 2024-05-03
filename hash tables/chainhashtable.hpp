#include <vector>
#include <forward_list>
#ifndef CHAIN_HASH_TABLE_HPP
#define CHAIN_HASH_TABLE_HPP

template <typename T>
class ChainHashTable
{
public:
    ChainHashTable() : container_() {}

    void insert(T value);

    void remove(T value);

    T find(T value);

private:
    std::vector<std::forward_list<T>> container_;
};

#include "./chain_methods/insert.tpp"
#include "./chain_methods/remove.tpp"
#include "./chain_methods/find.tpp"

#endif // CHAIN_HASH_TABLE_HPP