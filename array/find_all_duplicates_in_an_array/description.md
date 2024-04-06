# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 442

## Problem
Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appear once or twice, return an array of all the itnegers that appears twice.

You must write an algorithm that runs in `O(n)` time.

## Example:
```
Input: nums = [4, 3, 2, 7, 8, 2, 3, 1]
Output: [2, 3]

Input: nums = [1, 1, 2]
Output: [1]
```

## Key Idea
Simply use a hash set to keep track of visited elements.

## Solution
- [Python](./solution.py)