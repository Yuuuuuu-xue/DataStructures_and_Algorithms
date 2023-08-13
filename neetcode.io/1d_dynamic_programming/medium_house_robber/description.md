## LeetCode Problem
Medium 198

## Description
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the policy if two adjacent houses were broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the minimum amount of money you can rob tongith  without alerting the police.

## Example
```
Input: nums = [1, 2, 3, 1]
Output: 4
Explanation: rob house 0, house 3 with total 1 + 3 = 4

Input: nums = [2, 7, 9, 3, 1]
Explanation: rob house 0, house 3, and house 5 with total = 2 + 9 + 1 = 12
```

## Basic Idea
At each house, we can decide to rob or not rob. Thus let `dp[i][0]` be the maximum amount of money that we can rob houses up to house `i` that must include house `i` and `dp[i][1]` be the maximum amount of money that we can rob houses to house `i` that must not include house `i`.

Thus `dp[0][0]` and `dp[0][1]` both equal to `0` since no houses to rob.

For `dp[1][0] = nums[0]` since we must rob house 0 and `dp[1][1] = 0`.

For `2 <= i <= n`
  - We must rob house `i`, thus we cannot rob house `i - 1`, so `dp[i][0] = nums[i - 1] + dp[i - 1]`, i - 1 for nums because `i` is one-index based
  - We must not rob house `i`, thus we can rob house `i - 1` or not, so `dp[i][1] = max(dp[i - 1][0], dp[i - 1][1])`

Since we can use two variables and thus we can reduce the space complexity from `O(n)` to `O(1)`

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)