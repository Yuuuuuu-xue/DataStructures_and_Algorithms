## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Easy 338

## Problem
Given an integer `n`, return an array `ans` of length `n + 1` such that for each `0 <= i <= n`, `ans[i]` is the number of `1`'s in the binary representation of `i`.

## Example:
```
Input: n = 2
Output: [0, 1, 1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Input: n = 5
Output: [0, 1, 1, 2, 1, 2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
```

## General Idea: 
Note if `i % 2 == 0`, then the last bit must be 0 otherwise 1. Then we just need to know the rest of bits where we break the problem into the size i - 1. Thus, we can use dynamic programming to solve this problem. Let `dp[i] =` number of 1's in the binary representation of `i`. Then:
- If `i % 2 == 0`, then `dp[i] = dp[i >> 1]`, right shift one bit to ignore the last bit
- If `i % 2 != 0`, then `dp[i] = dp[i >> 1] + 1`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)