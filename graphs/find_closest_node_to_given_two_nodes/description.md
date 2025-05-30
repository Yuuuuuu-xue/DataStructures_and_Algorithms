## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2359

## Problem
You are given a directed graph of `n` nodes numbered from `0` to `n - 1`, where each node has at most one outgoing edge.

The graph is represented with a given 0-indexed array `edges` of size `n`, indicating that there is a directed edge from node `i` to node `edges[i]`. If there is no outgoing edge from `i`, then `edges[i] == -1`.

You are also given two integer `node1` and `node2`.

Return the index of the node that can be reached from both `node1` and `node2`, such that the maximum between the distance from `node1` to that node, and from `node2` to that node is minimized. If there are multiple answers, return the node with the smallest index and if no possible answer exists, return `-1`.

Note that `edges` may contain cycles.

## Example
```
Input: edges = [2, 2, 3, -1], node1 = 0, node2 = 1
Output: 2
```

## Key Idea
Note, for any node, if we know the minimum distance from node1 to that node and the minimum distance from node2 to that node, then we can simply loop over all the possible possible nodes and find minimum value.

To find the minimum distance from given node to every other node, we can simply perfrom a BFS.

Thus, we can simply perform BFS for node1 and node2. Then, we simply loop over nodes and get the value.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)