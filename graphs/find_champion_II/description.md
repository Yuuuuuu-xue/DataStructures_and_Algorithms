## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2924

## Problem
There are `n` teams numbered from `0` to `n - 1` in a tournament; each team is also a node in a DAG.

You are given the integer `n` and a 0-indexed 2D integer array `edges` of length `m` represneting the DAG, where `edges[i] = [u_i, v_i]` indicates that there is a directed edge from team `u_i` to team `v_i` in the graph.

A directed edge from `a` to `b` in the graph means that team `a` is stornger than team `b` and team `b` is weaker than team `a`.

Team `a` will be the champion of the tournament if there is no team `b` that is stronger than team `a`.

Return the team that will be the champion of the tournament if there is a unique champion, otherwise, return `-1`.

## Example
```
Input: n = 3, edges =[[0, 1], [1, 2]]
Output: 0

Input: n = 4, edges = [[0, 2], [1, 3], [1, 2]]
Output: -1
```

## Key Idea
Note, we can traverse the graph using BFS or DFS and any node that we did not see before will be the final solution. If multiple, return -1.

However, we don't really need to traverse the graph. We can simply use a set that initially filled from `0` to `n - 1`. Then traverse the node with pair (u, v) and remove `v` from the set. Then at the end, if set with one element, return it. Otherwise return `-1`.

## Complexity Analysis
- Runtime Complexity: O(n + |E|)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)