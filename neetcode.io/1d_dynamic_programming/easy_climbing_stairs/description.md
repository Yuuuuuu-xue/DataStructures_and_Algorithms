## LeetCode Problem
Easy 70

## Description
You are climbing a staircase. It takes `n` steps to reach the top. Each time you can either climb `1` or `2` steps. In how mnay distinct ways can you climb to the top?

## Example
```
Input: n = 2
Output: 2
Explanation: 1 + 1 and 2

Input: n = 3
Output: 3
Explanation: [1, 1, 1], [1, 2], [2, 1]
```

## Basic Idea
It we climb either `1` or `2` steps, then we would like to know the total number of steps that we can reach previosuly (i.e. to `n - 1` or `n - 2`), thus we can break the problem into sub problems and we can use dynamic programming to solve this problem.

Let `dp[i]` be the number of ways to climb to `ith` steps. Thus we know that:
- `dp[1] = 1` since `[1] is the only way`
- `dp[2] = 2` since `[1, 1]` and `[2]` are the only two ways
- `dp[i] = dp[i - 1] + dp[i - 2]`

Note since we always use i - 1 and i - 2, we can just use two variables `prev` and `prevPrev` to get the current value and reduce space complexity from `O(n)` to `O(1)`

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)