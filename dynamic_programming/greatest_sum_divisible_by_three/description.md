## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1262

## Problem
Given an integer array `nums`, return the maximum possible sum of elements of the array such that it is divisible by three.

## Example
```
Input: nums = [3, 6, 5, 1, 8]
Output: 18
Explanation: Pick numbers 3, 6, 1, and 8, their sum is 18.
```

## Key Idea
The key idea of this problem is that, for each num, we want to include it or not, and based on that, we want to know the maximum sum we can get with a remainder of 0, 1, or 2 since we want to know if the sum is divisible by three or not.

Given dp[i][k] where k = 0, 1, or 2 and i < n, it represents the maximum sum we can get from `nums[0:i+1]` and with remainder `k`.

For a base case
- `dp[0][nums[0] % 3] = nums[0]` and other `dp[0][k]` is `0`

Then for any `i`, we know
- `nums[i] % 3 = rem`
- if `dp[i - 1][k] > 0`, then it means there is some nums result in this remainder, then `dp[i][(k + rem) % 3] = dp[i - 1][k] + nums[i]` 

Note since dp depends on i - 1 only and hence we can use only 1 array and hence reach space complexity of O(1)

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
- [Optimized Python Solution](./optimized_solution.py)