## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1267

## Problem
You are given a map of a server center, represented as a `m * n` integer matrix `grid`, where 1 means that on that cell there is a server and 0 means that is no server. Two servers are said to communicate if they are on the same row or on the same column.

Return the number of servers that communicate with any other server.

## Example
```
Input: grid = [[1, 0], [0, 1]]
Output: 0

Input: grid = [[1, 0], [1, 1]]
Output: 3
```

## Key Idea
To solve this problem, we can use a DFS to traverse the servers and find our the number nodes that are connected to each other.

What if for a follow up, we want to add a new node and then find out the number of nodes that are connected to each other. We might need to run a DFS again.

Note, if two servers are connected to each other, they are in the same group. This provides a hint to use a disjoint set to solve this problem.

We will loop over all (servers) and group them together. Then, we use a disjoint set to group all servers and find out the number of servers that are connected to each other.

To group all servers together, we need to store them in the same row and same column.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution:
- [Python](./solution.py)