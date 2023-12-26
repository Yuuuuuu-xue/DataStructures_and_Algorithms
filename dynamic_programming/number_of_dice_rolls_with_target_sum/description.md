## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1155

## Problem
You have `n` dice, and each die has `k` faces numbered from `1` to `k`.

Given three integers `n`, `k` and `target`, return the number of possinle ways (out of the `k^n` total ways) to roll the dice, so the sum of the face-up numbers equals `target`. Since the answer may be too large, return it modulo `10**9 + 7`.

## Example
```
Input: n = 1, k = 6, target = 3
Output: 1
Explanation: You throw one die with 6 faces. There is only one way to get a sum of 3.
```

## Key Idea
Let `dp[i][j]` be the number of possible ways with `i` dies and target `j`. Then simply use a top down dynamic programming to solve this problem.

We can simply loop over `r` from `1` to `min(k, target)`, then one dice with `r` and thus `dp[i - 1][j - r]`.

At the end, if `i == 0` and `j == 0`, then return 1.

## Complexity Analysis
- Runtime Complexity: O(n * k * target)
- Space Complexity: O(n * target)

## Solution
- [C++](solution.cpp)