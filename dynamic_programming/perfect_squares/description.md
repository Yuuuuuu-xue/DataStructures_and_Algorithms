## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 279

## Problem
Given an integer `n`, return the least number of perfect square numbers that sum to `n`.

A perfect square is an integer that is the square of an integer;  in other words, it is the product of some integer with itself. For example, `1`, `4`, `9`, and `16` are perfect squares while `3` and `11` are not.

## Example
```
Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9
```

## Key Idea
We will solve this problem via dynamic programming because if `x` is the perfect square such that `x` is in the solution, then `1 + perfect_squres(n - x)` will be the optimal solution.

Thus, let `dp[0] = 0` and for all `i >= 1`, we loop over `j <= i * i` and update `dp[i]` to be `1 + dp[i - j * j]` since `j * j` is a perfect square. 


## Complexity Analysis
- Runtime Complexity: O(n * sqrt(n))
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)