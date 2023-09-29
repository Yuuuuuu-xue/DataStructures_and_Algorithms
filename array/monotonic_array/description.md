# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 896

## Problem
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array `nums` is monotone increasing if for all `i <= j`, `nums[i] <= nums[j]`. An array `nums` is monotone decreasing if for all `i <= j`, `nums[i] >= nums[j]`.

Given an integer array `nums`, return `true` if the given array is monotonic, or `false` otherwise.

## Example
```
Input: nums = [1, 2, 2, 3]
Output: true

Input: nums = [6, 5, 4, 4]
Output: true

Input: nums = [1, 3, 2]
Output: false
```

## Basic Idea
Simply loop over the array and use a variable with value `-1`, `0`, `1` to indicate the current element is `smaller`, `equal`, or `larger` than the next element. If a value is `0` and we should update it to `-1`, `0` or `1`. If a value is `-1` and the value is larger than the next element, we return `false`. Similarly, if a value is `1` and the value is smaller than the next element, we return `false`.

Return `true` at the end.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)