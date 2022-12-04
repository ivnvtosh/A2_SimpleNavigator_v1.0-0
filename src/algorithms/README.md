# Depth-First Search (DFS)

Depth-first search is an algorithm for traversing or searching tree or graph data structures

The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores
as far as possible along each branch before backtracking

Extra memory, usually a stack, is needed to keep track of the nodes discovered so far along a specified branch which helps
in backtracking of the graph

## Implementation of DFS traversal:

* Create a recursive function that takes the index of the node and a visited array
* Mark the current node as visited and print the node
* Traverse all the adjacent and unmarked nodes and call the recursive function with the index of the adjacent node

<h1 align="center"><img height="500" src="./imgs/Depth-First-Search.gif" width="500"/>


# Breadth-First Search (BFS)

Breadth-first search is an algorithm for searching a tree data structure for a node that satisfies a given property

It starts at the tree root and explores all nodes at the present depth prior to moving on to the nodes at the next depth level

Extra memory, usually a queue, is needed to keep track of the child nodes that were encountered but not yet explored

## Implementation of BFS traversal:

* Declare a queue and insert the starting vertex
* Initialize a visited array and mark the starting vertex as visited
* Follow the below process till the queue becomes empty:
    * Remove the first vertex of the queue
    * Mark that vertex as visited
    * Insert all the unvisited neighbours of the vertex into the queue

<h1 align="center"><img height="500" src="./imgs/Breadth-First-Search.gif" width="500"/>