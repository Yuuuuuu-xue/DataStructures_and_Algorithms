## LeetCode Problem
Medium 1584

## Description
You are given an array `points` representing integer coordinates of some points on a 2D-plane, where `points[i] = [xi, yi]`.

The cost of connecting two points `[xi, yi]` and `[xj, yj]` is the manhattan distance between them: `|xi - xj| + |yi - yj|` where `|val|` denotes the absolute value of `val`.

Return the minimum cost to make all points connected. All points are connected if there is exactly one simple path between any two points.
 
## Example
```
Input: points = [[0, 0], [2, 2], [3, 10], [5, 2], [7, 0]]
Output: 20
Explanation:
- Connect [0, 0] with [2, 2] with distance = 4
- Connect [2, 2] with [3, 10] with distance = 9
- Connect [2, 2] with [5, 2] with distance = 3
- Connect [5, 2] with [7, 0] with distance = 4
```

## Basic Idea
We can build a weighted graphs where the edges are the distance between two points. Then we basically want a minimum spanning tree. Thus, we can apply Kruskal's algorithm which requires a list of sorted weighted edges, then iterate over each edge, use a disjoint set, if two edges belong to the different groups, then it will be an edge in the minimum spanning tree.

## Complexity Analysis
- Runtime Complexity:
  - O(n^2) to build the edges
  - O(n lg n) to sort the edge
  - O(n^2) to build the minimum spanning tree with disjoint set
- Space Complexity:
  - O(n^2) to build the edges
  - O(n) to build the disjoint set

## Solution
- [C++](./solution.cpp)