## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2192

## Problem
You are given a positive integer `n` representing the number of nodes of a Directed Acyclic Graph (DAG). The nodes are numbered from `0` ato `n - 1` (inclusive).

You are also given 2D integer array `edges`, where `edges[i] = [from_i, to_i]` denotes that there is a undirectional edge from `from_i` to `to_i` in the graph.

Return a list `answer`, where `answer[i]` is the list of ancestors of the `ith` node, sorted in ascending order.

A node `u` is an ancestor of another node `v` if `u` can reach `v` via a set of edges.

## Example
```
Input: n = 8, edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]
Output: [[],[],[],[0,1],[0,2],[0,1,3],[0,1,2,3,4],[0,1,2,3]]
```

## Key Idea
We can build the graph, then simply traverse the graph and apply DFS for each node. For each node, we record each node's parent to current node `n`.

## Complexity Analysis
- Runtime Complexity(|V| * (|V| + |E|))
- Space Complexity: O(|V| + |E|)

## Solution:
- [Python](./solution.py)