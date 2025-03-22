## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2685

## Problem
You are given an integer `n`. There is an undirected graph with `n` vertices, numbered from `0` to `n - 1`. You are given a 2D integer array `edges` where `edges[i] = [a_i, b_i]` denotes that there exists an undirected edge connecting vertices `a_i` and `b_i`.

Return the number of complee connected components of the graph.

A connected component is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.

A connected component is said to be complete if there exists an edge between every pair of its vertices.

## Example
```
Input: n = 6, edges = [[0, 1], [0, 2], [1, 2], [3, 4]]
Output: 3
Explanation:
- One graph with 5 as the only node
- One graph with 0, 1, and 2 and fully connected
- One graph with 3 and 4 and fully connected
```

## Key Idea
We can simply loop over the node, if two nodes have an edge between them, we can put them into same group and save the number of edges (degree) for each node.

At the end, simply loop over each node again, find out all the nodes in the same group and number of edges in the group. The number of edges should be n * (n - 1) / 2.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)