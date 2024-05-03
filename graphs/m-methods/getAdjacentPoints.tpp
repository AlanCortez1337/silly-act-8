#ifndef GET_ADJACENT_POINTS_HPP
#define GET_ADJACENT_POINTS_HPP
template <typename T>
std::vector<std::pair<std::size_t, T>> mGraph<T>::GetAdjacentPoints(std::size_t targetPoint) {
    // ⭐TODO: return a vector of all the indicies of the adjacent points from the targetPoint.
    // FIX CONDITION LOGIC ERROR
    if (container_.at(targetPoint).size() == 0)
    return {};

    std::vector<std::pair<std::size_t, T>> temp_row {};

    for (int i = 0; i < container_.at(targetPoint).size(); i++) {
        if (container_.at(targetPoint).at(i).first != 0) {
            temp_row.push_back(i);
        }
    }

    return temp_row;
    // for (std::pair<std::size_t, T> temp : container_.at(targetPoint)) {
    //     if (temp.first != 0) {
    //         temp_row
    //     }
    // }
}

#endif // GET_ADJACENT_POINTS_HPP



