#include <vector>
#include <forward_list>
#ifndef ADJACENCY_LIST_GRAPH_HPP
#define ADJACENCY_LIST_GRAPH_HPP
template <typename T>
class alGraph {
public:
    alGraph(std::vector<std::forward_list<std::pair<std::size_t, T>>> container) : container_(container) {}

    void UpdateEdgeWeight(std::size_t pointA, std::size_t pointB, std::size_t newEdgeWeight);

    bool isAdjacent(std::size_t pointA, std::size_t pointB);

    std::size_t GetEdgeWeight(std::size_t pointA, std::size_t pointB);

    std::vector<std::size_t> GetAdjacentPoints(std::size_t targetPoint);

    void insertPoint(std::size_t newEdgeWeight);

private:
    std::vector<std::forward_list<std::pair<std::size_t, T>>> container_;
};

#include "./al-methods/getAdjacentPoints.tpp"
#include "./al-methods/getEdgeWeight.tpp"
#include "./al-methods/insertPoint.tpp"
#include "./al-methods/updateEdgeWeight.tpp"
#include "./al-methods/isAdjacent.tpp"

#endif // ADJACENCY_LIST_GRAPH_HPP