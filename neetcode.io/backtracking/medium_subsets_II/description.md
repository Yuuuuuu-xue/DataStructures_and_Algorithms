## LeetCode Problem
Medium 90

## Description
Given an integer array `nums` that may contain duplicates, return all possible subsets (the power set). The solution set must not contain duplicate subsets. Return the solution in any order.

## Example
```
Input: nums = [1, 2, 2]
Output: [[], [1], [1, 2], [1, 2, 2], [2], [2, 2]]

Input: nums = [0]
Output: [[], [0]]
```

## Basic Idea
Very similar to [Subset](../medium_subsets/description.md) but the resuling array may contain duplicate values, thus simply remove duplicates.

## Solution
- [C++](./solution.cpp)