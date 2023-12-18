# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1913

## Problem
The product difference between two pairs `(a, b)` and `(c, d)` is defined as `(a * b) - (c * d)`.

For example, the product difference between `(5, 6)` and `(2, 7)` is `5 * 6 - 2 * 7 = 16`

Given an integer array `nums`, choose four distinct indices `w`, `x`, `y` and `z` such that the product difference between pairs `(nums[w], nums[x])` and `(nums[y], nums[z])` is maximized.

Return the maximum such product difference.

## Example
```
Input: nums = [5, 6, 2, 7, 4]
Output: 34
Explanation: the product difference is (6 * 7) - (2 * 4) = 34
```

## Key Idea
Simply choose the largest and second largest and smallest and second smallest.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)