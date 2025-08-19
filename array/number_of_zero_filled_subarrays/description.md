# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2348

## Problem
Given an integer array `nums`, return the number of subarrays filled with `0`.

A subarray is a contiguous non-empty sequence of elements within an array.

## Examples:
```
Input: nums = [1, 3, 0, 0, 2, 0, 0, 4]
Output: 6
Explanation:
- There are 4 occurrences of [0] as a subarray
- There are 2 occurrences of [0, 0] as a subarray
```

## Key Idea
We can simply find the number of consecutive zeroes and count the occurrence.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
