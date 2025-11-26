## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2435

## Problem
You are given a 0-indexed `m x n` integer matrix `grid` and an integer `k`. You are current at position `(0, 0)` and you want to reach position `(m - 1, n - 1)` moving only down or right.

Return the number of paths where the sum of the elements on the path is divisible by `k`. Since the answer may be very large, return it modulo `10**9+7`.

## Key Idea
We start with `(0, 0)` and then we can move down or right. Hence `(i + 1, j)` or `(i, j + 1)` at a position `(i, j)`. 


At a position `(i, j)`, we could return to this cell with different remainder (i.e. `0` to `k - 1`). Then, let `dp[i][j][k]` represents the number of paths to cell `(i, j)` with remainder `k`.

Then for `(i, j)`, we iterate over `rem` from `0` to `k - 1`, then, update `1 + dp[i - 1][j][(rem + grid[i][j] % k) % k]` and also `dp[i][j - 1]`.

At the end, return `grid[n - 1][m - 1][0]`.

Initial value `dp[0][0][grid[0][0] % k] = 1` and else 0.

## Complexity Analysis
- Runtime Complexity: O(n * m * k)
- Space Complexity: O(n * m * k)

## Solution
- [Python](./solution.py)
