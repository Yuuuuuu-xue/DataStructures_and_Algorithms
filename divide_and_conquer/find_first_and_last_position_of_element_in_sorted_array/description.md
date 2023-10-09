## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 34

## Description
Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(lg n)` runtime complexity.

## Example
```
Input: nums = [5, 7, 7, 8, 8, 10], target = 8
Output: [3, 4]

Input: nums = [5, 7, 7, 8, 8, 10], target = 6
Output: [-1, -1]

Input: nums = [], target = 0
Output: [-1, -1]
```

## Basic Idea
Since the input array is sorted and we are trying to find the some element in it, it is obvious to use binary search to solve this problem.

Let `left = 0` and `right = n - 1` initially. If `nums[left] == nums[right]`, then we can stop binary search, we check if `nums[left] == target`, if so, we can return `[left, right]` otherwise target is not in the input array and we can return `[-1, -1]`.

Now let `mid = (left + right) / 2` and we compare `nums[mid]` with `target`.

Suppose `nums[mid] < target`, then the solution is on the left side.
Suppose `nums[mid] > target`, then the solution is on the right side.

The more tricky is that `nums[mid] == target`, we can simply update `left` or `right` to `mid` because it may skip over some range. What we can do is that if `nums[left] < target`, then `left` is not in the solution range and thus we can increment `left` by 1. Otherwise, it means `right` is not in the solution range and thus we can decrement `right` by 1.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
