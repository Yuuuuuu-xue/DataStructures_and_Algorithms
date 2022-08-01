## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 62

## Problem
There is a robot on an `m x n` grid. The robot is initially located at the **top-left corner** (i.e. `grid[0][0]`). The robot tries to move to the **bottom-right corner** (i.e., `grid[m - 1][n - 1]`). The robot can only move either move either down or right at any point in time.

Given two integers `m` and `n`, return the number of possible unique paths that the robot can take to react the bottom-right corner.

## Example:
```
Input: m = 3, n = 7
Output: 28

Input: m = 3, n = 2
Output: 3
```

## General Idea
Easy dp problem. Let dp[i][j] = number of ways from top-left corner to the grid[i][j]. Then dp[i][j] = dp[i - 1][j] + dp[i][j - 1]. Initially, dp[0][0] will be 1 and dp[m - 1][n - 1] will be our final solution.

However, notice we will need a loop from i = 1 to m and an inner loop from j = 1 to n. For each inner loop iteration, we update dp[i][j] to dp[i - 1][j] + dp[i][j - 1]. Then we simply need only one dimensional array. Thus, for dp[i] before we update it's value, dp[k] for k < i, will represent dp[k][j] and dp[i] will represent dp[i][j - 1]. Thus, dp[n - 1] will be our final solution.

## Solution
- [C++](./solution.cpp)
