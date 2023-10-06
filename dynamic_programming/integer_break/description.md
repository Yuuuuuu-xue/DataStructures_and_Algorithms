## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 343

## Problem
Given an integer `n`, break it into the sum of `k` positive integers, when `k >= 2`, and maximize the product of those integers. Return the maximum product that you can get.

## Example
```
Input: n = 2
Output: 1
Explanation: 2 = 1 + 1, 1 x 1 = 1

Input: n = 3
Output: 2
Explanation: 3 = 2 + 1, 2 x 1 = 2 

Input: n = 1
Output: 1
```

## Key Idea
Let `dp[i]` be the maximum product of the sum up to `i + 1`.

If `n == 2` or `n == 3`, we can return `1` or `2` as the base case. Then

As the base case, we know that `dp[0] = 1` and `dp[1] = 2` and `dp[2] = 3`.

Since we can use 2 * x or 3 * x as a valid pair.

Then for `i >= 3`, we can iterate over `k` from `1` to `(i + 1) / 2` and compute the maximum product with `dp[k] * dp[(i + 1) - k]`.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)
- [Rust](./solution.rs)