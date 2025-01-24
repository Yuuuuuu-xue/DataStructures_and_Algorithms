## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 802

## Problem
There is a directed graph of `n` nodes with each node labeled from `0` to `n - 1`. The graph is represented by a 0-indexed 2D integer array `graph` where `graph[i]` is an integer array of nodes adjacent to node `i`, meaning there is an edge from node `i` to each node in `graph[i]`.

A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).

Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

## Example:
```
Input: graph = [[1, 2], [2, 3], [5], [0], [5], [], []]
Output: [2, 4, 5, 6]
```

## Key Idea
Note, if a node is a terminal node, then it is a safe node. If a node can eventually reach to terminal node, not other node, then it's a safe node. This means, a node must not reach to some other nodes that can result in a cycle.

We can start with all the terminal node and then traverse to all the possible nodes in a reversed direction. This way, we visit a node only if all other nodes that can reach to it and is a safe node.

This provides a hint to use a topological sort where it starts with leaf node in a queue. When traversing the node in queue, remove the edge and traverse its neighbor, only put it back when neighbor becomes a leaf. It then provides a list of nodes in reversed direction (since we start with a leaf node) and exclude all nodes in a cycle.

We can reverse the edge in the graph since we will start with the terminal nodes which are leaf nodes. Then for each node, we also have an in-degree counter (to represent remove an edge).

At the end, sort the output array.

## Complexity Analysis
- Runtime Complexity: O(|V| + |E|)
- Space Complexity: O(|V| + |E|)

## Solution
- [Python](./solution.py)