## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1791

## Problem
There is an undirected star graph consisting of `n` nodes labeled from `1` to `n`. A star graph is a graph where there is one center node and exactly `n - 1` edges that connect the center node with every other node.

You are given a 2D integer array `edges` where eage `edges[i] = [u_i, v_i]` indicates that there is an edge between the nodes `u_i` and `v_i`. Return the center of the given star graph.
 
## Example
```
Input:
    4
    | 
    2
   / \
  1   3
Output: 2
```

## Key Idea
Simply loop over, when a vertex appears more than once, we return it.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)