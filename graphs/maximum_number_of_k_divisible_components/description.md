## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2872

## Problem
There is an undirected tree with `n` nodes labeled from `0` to `n - 1`. You are given the integer `n` and a 2D integer array `edges` of length `n - 1`, where `edges[i] = [a_i, b_i]` indicates that there is an edge between nodes `a_i` and `b_i` in the tree.

You are also given a 0-indexed integer array `values` of length `n`, where `values[i]` is the value associated with the `ith` node, and an integer `k`.

A valid split of the tree is obtained by removing any set of edges, possibly empty, from the tree such that the resulting components all have values that are divisible by `k`, where the value of a connected components is the sum of the values of its nodes.

Return the maximum number of components in any valid split.

## Example
```
Input: n = 5, edges = [[0, 2], [1, 2], [1, 3], [2, 4]], values = [1, 8, 1, 4, 4], k = 6
Output: 2
Explanation:
- Split into two subtrees
- First subtree contains nodes 2, 4, and 0, with values 1 + 4 + 1 = 6 and is divisibly by 6
- Second subtree contains nodes 1 nad 3, with values 8 + 4 = 12 and is divisible by 6
```

## Key Idea
Note, if a leave node value is divisibly by `k`, then it can be splitted into a separate node otherwise it must connect to the parent.

Thus, we can simply use a recursion (DFS) and start with leaf node, if it is divisible by k, then return 0 and increment the number of operations.

In parent node, adds all recursive call of leaf node + curr node, and check if it is divisible by k or not.

## Solution
- [Python Solution](./solution.py)
