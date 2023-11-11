## Shortest Weight Path
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2642

## Problem
THere is a directed weighted graph that consists of `n` nodes numbered from `0` to `n - 1`. The edges of the graph are intiially represented by the given array `edges` where `edges[i] = [from_i, to_i, edge_cost_i]` meaning that there is an edge from `from_i` to `to_i` with the cost `edge_cost_i`.

Implement the `Graph` class:
- `Graph(int n, int[][] edges)` initializes the object with `n` nodes and the given edges.
- `addEdge(int[] edge)` adds an edge to the list of edges where `edge = [from, to, edgeCost]`. It is guaranteed that there is no edge between the two nodes before adding this one.
- `int shortestPath(int node1, int node2)` returns the minimum cost of a path from `node1` to `node2`. If no path exists, return `-1`. The cost of a path is the sum of the costs of the edges in the path.

At most `100` calls will be made with `addEdge` and at most `100` calls will be made with `shortestPath`.

## Example
```
Graph g = new Graph(4, [[0, 2, 5], [0, 1, 2], [1, 2, 1], [3, 0, 3]]);
g.shortestPath(3, 2); // return 6
g.shortestPath(0, 3); // return -1
g.addEdge([1, 3, 4]);
g.shortestPath(0, 3); // return 6
```

## Key Idea
We can simply update a graph when `addEdge` is called. Then for `shortestPath`, we can simply perform a Dijkstra's algorithm to find the shorest weight path.

## Complexity Analysis
- Runtime Complexity:
  - Constructor: O(n) to construct the graph
  - addEdge: O(1) to update the graph
  - shortestPath: O(m lg n) to perform Dijkstra's algorithm
- Space Complexity:
  - Constructor: O(n)
  - addEdge: O(1)
  - shortestPath: O(n)

## Solution
- [C++](./solution.cpp)