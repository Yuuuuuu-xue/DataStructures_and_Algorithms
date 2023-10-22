# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
You are given an array of integers `nums` (0-indexed) and an integer `k`.

The score of a subarray `(i, j)` is defined as `min(nums[i], nums[i + 1], ..., nums[j]) * (j - i + 1)`. A good subarray is a subarray where `i <= k <= j`.

Return the maximum possible score of a good subarray.

## Example
```
Input: nums = [1, 4, 3, 7, 4, 5], k = 3
Output: 15
Explanation: The optimal subarray is (1, 5) with a score of min(4, 3, 7, 4, 5) * (5 - 1 + 1) = 3 * 5 = 15.
```

## Key Idea
We start with `left = right = k`, then move `left` to left or `right` to right. At each iteration, we store the maximum possible score. When we decide to update `left` or `right`, we can compare `nums[left - 1]` and `nums[right + 1]`, which one is larger, we update that one.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)