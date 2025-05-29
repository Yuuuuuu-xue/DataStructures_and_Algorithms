## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3373

## Problem
There exist two undirected trees with `n` and `m` nodes, with distinct labels in range `[0, n - 1]` and `[0, m - 1]`, respectively.

You are given two 2D integer arrays `edges1` and `edges2` of lengths `n - 1` and `m - 1`, respectively, where `edges1[i] = [a_i, b_i]` indicates that there is an edge between nodes `a_i` and `b_i` in the first tree and `edges2[i] = [u_i, v_i]` indicates that there is an edge between nodes `u_i` and `v_i` in the second tree. You are also given an integer `k`.

Note `u` is target to node `v` if the number of edges on the path from `u` to `v` is eve. Note that a node is always target to itself.

Return an array of `n` integers `answer`, where `answer[i]` is the maximum possible number of nodes target to node `i` of the first tree if you have to connect one node from the first tree to another node in the second tree.

Note that queries are independent from each other. That is, for every query you will remove the added edge before proceeding to the next query.

## Example
```
Input: edges1 = [[0, 1], [0, 2], [2, 3], [2, 4]], edges2 = [[0, 1], [0, 2], [0, 3], [2, 7], [1, 4], [4, 5], [4, 6]]
Output: [8, 7, 7, 8, 8]
```

## Key Idea
For every node in tree 1 and we can find the number of nodes that have even distance to node tree 1.

Now, we need to connect to a node from tree 2. We can simply choose the node with largest odd value and connect to the node in tree 1 and make it even length.

## Complexity Analysis
- Runtime Complexity:
    - n times of BFS for tree1 = O(n * n)
    - m times of BFS for tree2 = O(m * m)
    - Thus O(n^2 + m^2)
- Space Complexity: O(n + m)

## Solution
- [Python](./solution.py)
