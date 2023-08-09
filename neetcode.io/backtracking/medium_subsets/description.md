## LeetCode Problem
Medium 78

## Description
Given an integer array `nums` of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

## Example
```
Input: nums = [1, 2, 3]
Output: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]

Input: nums = [0]
Output: [[], [0]]
```

## Basic Idea
We can simply use a recursion to solve this problem where we pass in an index `i` and will generate the all possible subsets starting from index `i` to the end of the array. Thus the base case will be `[[], [num]]` where `num` is the last number in the array. Then for each recursive step, we loop over the result, for eac

## Complexity Analysis
- Runtime Complexity: O(n * 2 ^ n) since we have n recursive calls and for each recursive calls, we loop over the current subsets and append new subsets which the length will grow O(2 ^ n)
- Space Complexity: O(2 ^ n)

## Solution
- [C++](./solution.cpp)