# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2799

## Problem
You are given an array `nums` consisting of positive integers.

We call a subarray of an array complete if the following condition is satisfied:
- The number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.

Return the number of complete subarrays.

A subarray is a contiguous non-empty part of an array.

## Example:
```
Input: nums = [1, 3, 1, 2, 2]
Output: 4
Explanation: The complete subarrays are the following: [1, 3, 1, 2], [1, 3, 1, 2, 2], [3, 1, 2], and [3, 1, 2, 2]
```

## Key Idea
This is very typical sliding window problem.

If window with minimum size i and j works, then window from 0, ..., i and j work.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)