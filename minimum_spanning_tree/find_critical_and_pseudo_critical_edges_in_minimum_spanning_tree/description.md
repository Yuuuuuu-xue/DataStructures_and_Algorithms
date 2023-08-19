## Spanning Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1489

## Problem
Given a weighted undirected connected graph with `n` vertices numbered from `0` to `n - 1` and an array `edges` where `edges[i] = [a_i, b_i, weight_i]` represents a bidirectional and weighted edge between nodes `a_i` and `b_i`. A minimum spanning tree (MST) is a subset of the graph's edges that connects all vertices without cycles and with the minimum possible total edge weight.

Find all the critical and pseudo-critical edges in the given graph's minimum spanning tree.

An MST edge whose deletion from the graph would cause the MST weight to increase is called a critical edge.

On the other hand, a pseudo-critical edge is that which can appear in some MSTs but not all.

Note, you can return the indices of the edges in any order.

Note you can assume `2 <= n <= 100`

## Example
```
Input: n = 5, edges = [[0, 1, 1], [1, 2, 1], [2, 3, 2], [0, 3, 2], [0, 4, 3], [3, 4, 3], [1, 4, 6]]
Output: [[0, 1], [2, 3, 4, 5]]

Explanation: the edge at index 0 and 1 are critical edges, 2, 3, 4 and 5 are pseudo-critical edges.
```

## Key Idea
The key idea of this problem is that given weight of a MST = `m` and an edge `e`. If
- We remove `e` from the graph, then if we cannot form a MST or the weight of such MST is > `m`, then `e` is a critical edge
- If `e` is not a critical edge and we force it to include in a tree, if we form a tree weight weight == `m`, then `e` is a pseudo-critical edge

Note we can use Kruskal's algorithm to find the weight of a MST. Then we iterate over each edge, perform two operations:
1. Remove `e` and try to construct a MST using Kruskal's algorithm
2. Include `e` and try to construct a MST using Kruskal's algorithm

Note we can assume `n <= 100`, this is an important hint that we can apply Kruskal's algorithm many times.

## Complexity Analysis
- Time Complexity: O(n) + O(e * n)
- Space Complexity: O(n + e)

## Solution
- [C++](./solution.cpp)
