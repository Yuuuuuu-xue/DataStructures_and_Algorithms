## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2493

## Problem
You are given a positive integer `n` representing the number of ndoes in an undirected graph. The node are labeled from `1` to `n`.

You are also given a 2D integer array `edges`, where `edges[i] = [a_i, b_i]` indicates that there is a bidirectional edge between nodes `a[i]` and `b_i`. Notide that the given graph may be disconnected.

Divide the nodes of the graph into `m` groups (1-indexed) such that
- Each node in the graph belongs to exactly one group
- For every pair of nodes in the graph that are connected by an edge `[a_i, b_i]` if `a_i` belongs to the group with index `x`, and `b_i` belongs to group with index `y`, then `|y - x| = 1`.

Return the maximum number of groups (i.e. maximum `m`) into which you can divide the nodes. Return `-1` if it is impossible to group the ndoes with the given conditions.

## Example
```
Input: n = 6, edges = [[1, 2], [1, 4], [1, 5], [2, 6], [2, 3], [4, 6]]
Output: 4
Explanation:
- Node 5 belongs to group 1
- Node 1 belongs to group 2
- Node 2 and 4 belong to group 3
- Node 3 and 6 belong to group 4
```

## Key Idea
Note, if a graph is not bipartite graph, then it is not possible to group all the nodes into m groups.

A bipartite graph is that we color the nodes into two colors i.e. blue and red. If a node is blue, then all its neighbor are colored as red and no edge between the same color.

This condition will satisify that we can group of the nodes into m groups.

Thus, we need to iterate over all nodes and give them a color. If the graph is not a bipartite graph, we will return `-1` immediately.

If the graph is. Then we need to find out `m`. To achieve it, we simply fix a node at position 1, then perform BFS to find out the maximum depth. However, this might not produce an optimal solution. To find out the optimal solution, we can loop over all nodes and perform a BFS to find out maximum `m`.

## Complexity Analysis
- n = |V|, m = |E|
- Runtime Complexity:
    - O(n + m) to find out the number of edges
    - O(n * (n + m)) to iterate over each node and perform a BFS
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)