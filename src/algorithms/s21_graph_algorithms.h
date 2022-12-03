#ifndef S21_GRAPH_ALGORITHMS_H
#define S21_GRAPH_ALGORITHMS_H

#include <vector>

class	GraphAlgorithms // реализация алгоритмов на графах
{
public:
	std::vector<int> DepthFirstSearch(Graph &graph, int startVertex); // нерекурентный поиск в глубину в графе от заданной вершины
	std::vector<int> BreadthFirstSearch(Graph &graph, int startVertex); // поиск в ширину в графе от заданной вершины
private:
};

#endif //S21_GRAPH_ALGORITHMS_H
