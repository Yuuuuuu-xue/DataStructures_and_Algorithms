## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium

## Problem
Given a directed acyclic graph (DAG) of `n` nodes labeled from `0` to `n - 1`, find all possible paths from node `0` to node `n - 1` and return them in any order.

The graph is given as follows: `graph[i]` is a list of all nodes you can visit from node `i` (i.e., there is a directed edge from node `i` to node `graph[i][j]`).
 
## Example
```
Input: graphs = [[1, 2], [3], [3], []]
Output: [[0, 1, 3], [0, 2, 3]]
```

## Key Idea
We can simply traverse the graph with DFS and backtracking to keep track of the current path.

## Complexity Analysis
- Runtime Complexity: O(|V| + |E|)
- Space Complexity: O(|V| + |E|)

## Solution:
- [Python](./solution.py)