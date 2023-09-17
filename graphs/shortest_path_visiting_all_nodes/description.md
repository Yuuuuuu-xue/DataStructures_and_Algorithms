## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 847

## Problem
You have an undirected, connected graph of `n` nodes labeled from `0` to `n - 1`. You are given an array `graph` where `graph[i]` is a list of all the nodes connected with node `i` by an edge.

Return the length of the shortest path that visits every node. You may start and stop at any node, you may revisit nodes multiple times, and you may reuse edges.

You can assume `1 <= n <= 12`

## Examples
```
Input: graphs = [[1, 2, 3], [0], [0], [0]]
Output: 4
Explanation:
    0
  / | \
 1  2  3
One possible path is: [1, 0, 2, 0, 3]

Input: graphs = [[1], [0, 2, 4], [1, 3, 4], [2], [1, 2]]
Output: 4
Explanation:
  2 - 1 - 0
  | \ |
  3   4
One possible path is [0, 1, 4, 2, 3]
```

## Key Idea
The hint `1 <= n <= 12` gives us a hint to try all the possible paths.

This means we can solve this problem by BFS. We initially push all the nodes in the graph so we can explore all the nodes initially. Thus, each node will store information about the current path. Thus, each node will store two piece of information:
- The current node value
- A set of visited nodes in the path. Since `1 <= n <= 12`, we can actually use a bitmask to represent the visited nodes
For the cost, we can traverse level by level, at the end, when the bitmask = 2 ^ n - 1, we can return that value.

We may have duplicate pairs visited many times, for this case, we can simply use a set to avoid it.

## Complexity Analysis
- Runtime Complexity: O(n * 2 ^ n), 2 ^ n since each node in the path can be visited or not
- Space Complexity: O(n * 2 ^ n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)