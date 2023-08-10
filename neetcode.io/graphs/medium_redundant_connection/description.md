## LeetCode Problem
Medium 684

## Description
In this problem, a tree is an undirected graph that is connected and has no cycles.

You are given a graph that started as a tree with `n` nodes labeled from `1` to `n`, with one additional edge added. The added edge has two different vertices chosen from `1` to `n`, and was not an edge that already existed. The graph is represented as an array `edges` of length `n` where `edges[i] = [ai, bi]` indicates that there is an edge between nodes `ai` and `bi` in the graph.

Return an edge that can be removed so taht the resulting graph is a tree of `n` nodes. If there are multiple answers, return the answer that occurs last in the input.
 
## Example
```
Input: edges = [[1, 2], [1, 3], [2, 3]]
Output: [2, 3]
  1 -- 2
  |  /
  3

Input: edges = [[1, 2], [2, 3], [3, 4], [1, 4], [1, 5]]
  2 -- 1 -- 5
  |    |
  3 -- 4
Output: [1, 4]
```

## Basic Idea
For each edge, we can try to see if we can traverse one node to another without this edge, if so then this edge is an additional edge. Thus, we can simply apply BFS/DFS for every edge.

Alternatively, we can use disjoint set to solve this problem. For every edge `ei = (ai, bi)`, we can make `ai` and `bi` belongs to the same group. Thus, if we try to union two nodes and realize they belong to the same group, then the edge is an additional edge.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)