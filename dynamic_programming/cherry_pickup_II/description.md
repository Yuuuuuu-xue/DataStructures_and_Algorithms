## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1463

## Problem
You are given a `rows x cols` matrix `grid` representing a fieldof cherries where `grid[i][j]` represents the number of cherries that you can collect from the `(i, j)` cell.

You have two robots that can collect cherries for you:
- Robot 1 is located at the top-left corner `(0, 0)` and
- Robot 2 is located at the top-right corner `(0, cols - 1)`

Return the maximum number of cherries collection using both robots by following the rules below:
- From a cell `(i, j)`, robots can move to cell `(i + 1, j - 1)`, `(i + 1, j)`, or `(i + 1, j + 1)`
- When any robot passes through a cell, it picks up all cherries, and the cell becomes an empty cell
- When both robots stay in the same cell, only one takes the cherries
- Both robots cannot move outside of the grid at any moment
- Both robots should reach the bottom row in `grid`

## Example
```
Input: grid =
[[3, 1, 1],
 [2, 5, 1],
 [1, 5, 5],
 [2, 1, 1]]
Output: 24
Explanation:
- Optimal path for robot 1: (0, 0) -> (1, 0) -> (2, 1) -> (3, 0)
- Optimal path for robot 2: (0, 2) -> (1, 1) -> (2, 2) -> (3, 2)
```

## Key Idea
Simply use a dynamic programming to solve this problem. For `dp[i][j][k]` be the optimal solution with robots at `i`th row and robot 1 is at column `j` and robot 2 is at column `k`.

Note, we can assume number of rows and columns `<= 70`.

## Complexity Analysis
- Time Complexity: O(n * m * m)
- Space Complexity: O(n * m * m)

## Solution
- [C++](solution.cpp)
