## LeetCode Problem
Medium 153

## Description
Suppose an array of length `n` sorted in ascending order is rotated between `1` and `n` times. For example, the array `nums = [0, 1, 2, 4, 5, 6, 7]` might become:
- `[4, 5, 6, 7, 0, 1, 2]` if it was rotated `4` times.
- `[0, 1, 2, 4, 5, 6, 7]` if it was rotated `7` times.

Notice that rotating an array `a[0], a[1], ..., a[n - 1]` 1 times results in the array `a[n - 1], a[0], a[1], ..., a[n-2]`.

Given the sorted rotated array `nums` of unique elements, return the minimum element of this array. You must write an algorithm that runs in `O(lg n)` times.

## Example
```
Input: nums = [3, 4, 5, 1, 2]
Output: 1

Input: nums = [4, 5, 6, 7, 0, 1, 2]
Output: 0

Input: nums = [11, 13, 15, 17]
Output: 11
```

## Basic Idea
Notice, if we rotate an arary 1 time, then we end up with `a[n - 1], a[0], a[1], ..., a[n - 2]` and `a[n - 1] > a[n - 2]`. Then if we rotate again, we have `a[n - 2], a[n - 1], a[0], a[1], ..., a[n - 3]` and `a[n - 2] > a[n - 3]`. Thus, if we have `a[left] < a[right]`, this means the array `a[left:right + 1]` is sorted and the minimum value will be `a[left]`. Now, let `mid = (left + right) / 2`. We can use `a[mid]` to compare with `a[right]`. Similarly, if `a[mid] > a[right]`, then the same argument applies and thus `a[left] < a[left + 1] < ... < a[mid]` and so the minimum must occur in the right side and will not be `a[mid]`. So we move to the right part. If `a[mid] < a[right]` then the answer must occur in the left side.

## Solution
- [C++](./solution.cpp)