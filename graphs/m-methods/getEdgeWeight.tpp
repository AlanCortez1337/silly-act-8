#ifndef GET_EDGE_WEIGHT_HPP
#define GET_EDGE_WEIGHT_HPP
template <typename T>
std::size_t mGraph<T>::GetEdgeWeight(std::size_t pointA, std::size_t pointB) {
    // ⭐TODO: return the edge weight in the matrix going from pointA to pointB
    if (!isAdjacent(pointA, pointB)) {
     return 0;
    }
   
   return container_.at(pointA).at(pointB);
}

#endif // GET_EDGE_WEIGHT_HPP



