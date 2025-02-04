# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1800

## Problem
Given an array of positive integers `nums`, return te maximum possible sum of an ascending subarray in `nums`.

A subarray is defined as a contiguous sequence of numbers in an array.

A subarray `[nums_l, nums_l+1, ..., nums_r-1, nums_r]` is acending if for all `i` where `l <= i < r`, `nums_i < nums_i+1`. Note that a subarray of size `1` is ascending.

## Example
```
Input: nums = [10, 20, 30, 5, 10, 50]
Output: 65
Explanation: [5, 10, 50] is the ascending subarray with the maximum sum of 65
```

## Key Idea
A simply loop to keep track of curr element and curr sum.

## Solution
- [Python](./solution.py)