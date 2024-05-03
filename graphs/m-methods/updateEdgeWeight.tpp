#ifndef UPDATE_EDGE_WEIGHT_HPP
#define UPDATE_EDGE_WEIGHT_HPP
template <typename T>
void mGraph<T>::UpdateEdgeWeight(std::size_t pointA, std::size_t pointB, std::size_t newEdgeWeight)
    {
        if (!isAdjacent(pointA, pointB)) {
            std::cout << "stoopid" << std::endl;
            return;
        }
            
        container_.at(pointA).at(pointB) = newEdgeWeight;
        return;
    }

#endif // UPDATE_EDGE_WEIGHT_HPP
