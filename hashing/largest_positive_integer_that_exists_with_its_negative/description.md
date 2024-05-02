## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2441

## Problem
Given an integer array `nums` that does not contain any zeros, find the largest positive integer `k` such that `-k` also exists in the array.

Return the positive integer `k`. If there is no such integer, return `-1`.

## Example
```
Input: nums = [-1, 2, -3, 3]
Output: 3
```

## Key Idea
Simply use a hash set to keep track of the seen number. Then for a given number `num`, if `-num` exists in the set, then keep track the largest number.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
