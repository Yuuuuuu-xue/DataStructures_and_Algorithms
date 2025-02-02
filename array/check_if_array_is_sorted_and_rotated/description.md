# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1752

## Problem
Given an arary `nums`, return `true` if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return `false`.

There may be duplicates in the original array.

## Example:
```
Input: nums = [3, 4, 5, 1, 2]
Output: true
```

## Key Idea
Simply compare current element with next element. If curr > next, then we have a break point, we can compare next `nums[0]` and keep comparing it with `nums[0]` and next element.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)