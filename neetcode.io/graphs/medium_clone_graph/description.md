## LeetCode Problem
Medium 133

## Description
Given a reference of a node in a connected undirected graph.

Return a deep copy (clone) of the graph.

Each node in the graph contains a value `int` and a list `List[Node]` of its neighbors.

For simplicity, each node's value is the same as the node's index (1-indexed). For example, the first node with `val == 1` and second node with `val == 2`.

## Example
```
Input: adjList = [[2,4],[1,3],[2,4],[1,3]]
Output: [[2,4],[1,3],[2,4],[1,3]]
```

## Basic Idea
Let `m` be a map that maps the node value to a node. Then we can simply traverse each node in the graph using BFS or DFS, for each node, iterate over its neighbor:
- If node `n` does not exist in `m`, create a clone node `n` and put it in `m` and update the neighbor (clone node)
- If node `n` does exist in `m`, update the clone node to point to `n`

## Complexity Analysis
- Runtime Complexity: O(V + E)
- Space Complexity: O(V)

## Solution
- [C++](./solution.cpp)