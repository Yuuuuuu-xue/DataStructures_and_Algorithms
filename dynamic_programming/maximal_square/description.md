## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 221

## Problem
Given an `m x n` binary `matrix` filled with `0`'s and `1`'s, find the largest square containing only `1`'s and return its area.

## Example
```
Input: matrix =
  [['1', '0', '1', '0', '0'],
   ['1', '0', '1', '1', '1'],
   ['1', '1', '1', '1', '1'],
   ['1', '0', '0', '1', '0']]
Output: 4

Input: matrix =
  [['0', '1'],
   ['1', '0']]
Output: 1
```

## Key Idea
We will use dynamic programming to solve this problem, let `dp[i][j]` be the width of the maximum sqaure so that its bottom right corner is at `(i, j)`. Then we know that for any `(i, j)`, `dp[i][j] = min(dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]) + 1`. This is because if we have the square
```
  [[1, 1, 1],
   [1, 1, 1],
   [1, 1, 1]]
```
and we are at bottom right corner `(2, 2)`, then the min width of `(1, 1)`, `(2, 1)`, and `(1, 2)` is 2. So we can use the 2 x 2 square end with `(1, 1)` and the side length of the `(2, 1)` and `(1, 2)` to construct a 3 x 3 square.

For each cell, we will update the maximum side width. At the end, return its square so we have the area.

## Solution
- [C++](solution.cpp)
