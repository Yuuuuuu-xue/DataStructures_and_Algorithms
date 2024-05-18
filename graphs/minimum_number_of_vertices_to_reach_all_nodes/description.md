## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1557

## Problem
Given a directed cyclic graph, with `n` vertices numbered from `0` to `n - 1`, and an array `edges` where `edges[i] = [from_i, to_i]` represents a directed edge from node `from_i` to node `to_i`.

Find the smallest set of vertices from which all nodes in the graph are reachable. It's guaranteed taht a unique solution exists.

Notice that you can return the vertices in any order.

## Example
```
Input: n = 6, edges [[0, 1], [0, 2], [2, 5], [3, 4], [4, 2]]
Output: [0, 3]
Explanation:
It's not possible to reach all nodes from any single vertext. From 0, we can reach to [0, 1, 2, 5]. From 3 we can reach to [3, 4, 2, 5]
```

## Key Idea
Since the graph is acyclic, this means the solution must contains at least one node.

Note, if a node has an incoming edge, then this node can be reached by some other node.

Thus, if any node with 0 incoming edge, then that's the node that we are looking for. Thus, simply keep a set of all nodes, remove it from set if it has at least one incoming edge.

## Solution
- [Python Solution](./solution.py)
