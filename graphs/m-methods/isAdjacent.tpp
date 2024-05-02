#ifndef IS_ADJACENT_EDGE_HPP
#define IS_ADJACENT_EDGE_HPP
template <typename T>
bool mGraph<T>::isAdjacent(std::size_t pointA, std::size_t pointB) {
    
    if (container_.size() <= pointA) {
      return false;
    }
    if (container_.at(pointA).size() <= pointB) {
      return false;
    }
    
    (container_.at(pointA).at(pointB) > 0) ? return true : return false;
    
}

#endif // IS_ADJACENT_EDGE_HPP



