## LeetCode Problem
Hard 312

## Description
You are given `n` balloons, indexed from `0` to `n - 1`. Each balloon is painted with a number on it represented by an array `nums`. You are asked to burst all the balloons.

If you burst the `ith` ballon, you will get `nums[i - 1] * nums[i] * nums[i + 1]` coins. If `i - 1`

## Example
```
Input: nums = [3, 1, 5, 8]
Output: 167
Explanation:
nums = [3, 1, 5, 8] -> [3, 5, 8] -> [3, 8] -> [8] -> []
coins =   3 * 1 * 5 + 3 * 5 * 8  +  3 * 8  +   8  = 167
```

## Basic Idea
Since we can choose to brust `kth` ballon then left with `n - 1` ballon, since it reduces to a subproblem, this provides a hint for us to solve this problem via Dynamic Programming.

First of all, to avoid index out of range, we can try to insert `1` in both end, this will ensure that `k - 1` and `k + 1` always within the range.

Now, let `dp[i][j] =` max amount of coins we can get in `nums[i : j + 1]`. Now, if let `i <= k <= j`, we will try to brust `kth` ballon.

Then `dp[i][j] = max(dp[i][j], nums[k - 1] * nums[k] * nums[k + 1] + dp[i, k - 1] + dp[i, k + 1])`

But this is incorrect. For example, if we have `[3, 1, 5]` and `k = 1`, then we brust the balloon with `1` point, the balloons become `[3, 5]`, not simply break it into left and right balloons.

Instead, suppose we try to brust `kth` balloon lastly, then note the points we can get is `nums[i - 1] * nums[k] * nums[j + 1]` and we can simply use `dp[i][k - 1]` and `dp[i][k + 1]` to solve the problem.

Note, we need to iterate over the length `l`, then iterate over `i`, and use those two variables to calculate `j`.

## Complexity Analysis
- Runtime Complexty: O(n ^ 3)
- Space Complexity: O(n ^ 2)

## Solution
- [C++](./solution.cpp)