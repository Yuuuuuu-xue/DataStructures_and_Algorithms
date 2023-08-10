## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 81

## Problem
There is an integer array `nums` sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, `nums` is rotated at an unknown pivot index `k` (`0 <= k < nums.length`) such that the resulting array is `nums[k], nums[k + 1], ..., nums[n - 1], nums[0], nums[1], ..., nums[k - 1]`. For example, `[0, 1, 2, 4, 4, 4, 5, 6, 6, 7]` might be rotated at pivot index `5` and become `[4, 5, 6, 6, 7, 0, 1, 2, 4, ,4]`.

Given the array `nums` after the rotation and an integer `target`, return `true` if `target` is in `nums`, or `false` if it is not in `nums`.

You must decrease the overall operation steps as much as possible.

## Examples:
```
Input: nums = [2, 5, 6, 0, 0, 1, 2], target = 0
Output: true

Input: nums = [2, 5, 6, 0, 0, 1, 2], target = 3
Output: false
```

## Basic Idea
The obvious solution is to iterate over each element and compare them, this will result in O(n) runtime complexity. Since the input is sorted but rotated, we should still trying to apply binary search to solve this problem. Let `left = 0` and `right = n - 1` initially and `mid = (left + right) / 2`. And we compare `nums[mid]` with `target`. There will be three cases:
- `nums[mid] == target`, then we can return `true` immediately.
- `nums[mid] < target` and `nums[mid] > target` is more complicated.

Since it may contain duplicate values where `nums[left] == nums[mid] == nums[right]`, for this case, we can simply move left and right pointers at the same time.

If `target < nums[mid]`, then we need to find the larger array
- `nums[left] < nums[mid]` and `target >= nums[left]`, then the left side must be sorted and target is in the left side
- `nums[left] > nums[mid]` and `target <= nums[left]`, then the left side is the rotated array and target is in the left side because values `<= mid` will be in the left side
- `nums[right] > nums[mid]`, then the right side is sorterd and thus target is in the left side

Similar for the other side

## Complexity Analysis
- Runtime Complexity: O(lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)