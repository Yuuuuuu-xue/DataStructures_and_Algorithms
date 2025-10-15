## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3350

## Problem
Given an array `nums` of `n` integers, your task is to find the maximum value of `k` for which there exist two adjacent subarrays of length `k` each, such that both subarrays are strictly increasing. Specifically, check if there are two subarrays of length `k` starting at indices `a` and `b` `a < b`, where:
- Both subarrays `nums[a..a + k - 1]` and `nums[b..b + k - 1]` are strictly increasing.
- The subarrays must be adjacent, meaning b = a + k

Return the maximum possible value of `k`.

A subarray is a contiguous non-empty sequence of elements within an array.

## Example
```
Input: nums = [2, 5, 7, 8, 9, 2, 3, 4, 3, 1]
Output: 3
Explanation:
- The subarray starting at index 2 is [7, 8, 9] which is strictly increasing
- The subarray starting at index 5 is [2, 3, 4] which is strictly increasing
```

## Key Idea
If we break the problem into a subproblem that given `nums` and `k`, is it possible to find such two subarrays with length `k` that both are strictly increasing and subarrays are adjacent?

To solve this problem, this means, we need to iterate over elements from index `i` to `i - 2 * k`, then we want to know if array `nums[i:i+k]` is strictly increasing and `nums[i+k:i+2*k]` is strictly increasing, if so, then we return true.

Given two index `i < j`, we want to know if the array `nums[i:j]` is strictly increasing or not, we can simply use `dp[j]` where it represents the longest array that is strictly increasing starting from left.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
