## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 329

## Description
Given an `m x n` integers `matrix`, return the length of the longest increasing path in `matrix`. From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary.

## Example:
```
Input: matrix =
  [[9, 9, 4],
   [6, 6, 8],
   [2, 1, 1]]
Output: 4
Explanation: the longest increasing path is [1, 2, 6, 9]

Input: matrix =
  [[3, 4, 5],
   [3, 2, 6],
   [2, 2, 1]]
Output: 4
Explanation: the longest increasing path is [3, 4, 5, 6]. Moving diaonally is not allowed.
```

## Key Idea
Note we can apply DFS with Dynamic Programming to solve this problem. However, there is also an alternative way to solve this problem which is via Kahn's Algorithm of topological sort.

We will first construct the graph. For any cell at `(i, j)`, its neighbors will be `[(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]` and neighbor cell must be valid (within the board) and value must > current cell.

Then suppose we start with the leaf node and remove all the leaf node, the leaf node will be the maximum value of any path. Then some non-leaf nodes will be the leaf and will be the next node on the path to be removed. If we repeat the same process and remove all the leaves layer by layer. At the end, the number of layer will be the maximum length path which is the exact solution that we are looking for.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)