## LeetCode Problem
Easy 704

## Description
Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`. You must write an algorithm with `O(lg n)` runtime complexity.

You can assume all the integers in `nums` are unique.

## Example
```
Input: nums = [-1, 0, 3, 5, 9, 12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
```

## Basic Idea
Simple binary search will solve this question.

## Solution
- [C++](./solution.cpp)