## LeetCode Problem
Medium 33

## Description
There is an integer array `nums` sorted in ascending order (with distinct values). Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `k` (1 <= k < nums.length) such taht the resulting array is `[nums[k], nums[k + 1], ..., nums[n - 1], nums[0], nums[1], ..., nums[k - 1]]` (0-indexed). For example, `[0, 1, 2, 4, 5, 6, 7]` might be rotated at pivot index `3` and become `[4, 5, 6, 7, 0, 1, 2]`.

Given the array `nums` after the possible rotation and an integer `target`, return the index of `target` if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with `O(lg n)` runtime complexity.

You can assume all the values are unique.

## Example
```
Input: nums = [4, 5, 6, 7, 0, 1, 2], target = 0
Output: 4

Input: nums = [4, 5, 6, 7, 0, 1, 2], target = 3
Output: -1
```

## Basic Idea
Let `left = 0` and `right = n - 1`. We will use binary search to solve this problem. Since the input array is sorted and possibly rotated, then we know that for `mid = (left + right) / 2`, we need a way to detemine to update the `left` or `right`. Notice, if we know left side is sorted i.e. `nums[left] < nums[mid]`, then simply check if target < nums[mid], if so it must occur in the left side otherwise right side. Similarly, we can check if right side is sorted or not.

## Solution
- [C++](./solution.cpp)