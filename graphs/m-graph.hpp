#include <vector>
#ifndef MATRIX_GRAPH_HPP
#define MATRIX_GRAPH_HPP
template <typename T>
class mGraph {
public:
    mGraph(std::vector<std::vector<std::pair<std::size_t, T>>> container) : container_(container) {}

    void UpdateEdgeWeight(std::size_t pointA, std::size_t pointB, std::size_t newEdgeWeight);

    std::size_t GetEdgeWeight(std::size_t pointA, std::size_t pointB);

    std::vector<std::size_t> GetAdjacentPoints(std::size_t targetPoint);

    void insertPoint(std::size_t newEdgeWeight);

private:
    std::vector<std::vector<std::pair<std::size_t, T>>> container_;
};

#include "./m-methods/getAdjacentPoints.tpp"
#include "./m-methods/getEdgeWeight.tpp"
#include "./m-methods/insertPoint.tpp"
#include "./m-methods/updateEdgeWeight.tpp"

#endif // MATRIX_GRAPH_HPP