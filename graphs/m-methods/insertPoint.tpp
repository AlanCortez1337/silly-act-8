#ifndef INSERT_POINT_HPP
#define INSERT_POINT_HPP
template <typename T>
void mGraph<T>::insertPoint(std::size_t newEdgeWeight)
    {
        for (int i=0; i < container_.size(); i++) {
        container_.at(i).pushback(0);
        }
        container_.pushback(std::vector<std::size_t> meow(container_.size(), 0));
        
        UpdateEdgeWeight(pointA, pointB, newEdgeWeight);
        
        return;    
    }
#endif // INSERT_POINT_HPP



