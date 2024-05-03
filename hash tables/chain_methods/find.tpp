#ifndef CHAIN_HASH_TABLE_FIND_TPP
#define CHAIN_HASH_TABLE_FIND_TPP

template <typename T>
T ChainHashTable<T>::find(T value) {
    int k = value;
    int n = container_.size();
    int index = k % n;
    std::string second{};

    for (std::pair<int,T> temp : container_.at(index)) {
        if (value == temp.first) {
            second = temp.second;
            return second;
        }
    }
}

#endif // CHAIN_HASH_TABLE_FIND_TPP
