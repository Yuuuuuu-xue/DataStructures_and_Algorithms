# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2401

## Problem
You are given an array `nums` consisting of positive integers.

We call a subarray of `nums` nice if the bitwise AND of every pair of elements that are in different positions in the sthubarray is equal to `0`.

Return the length of the longest nice subarray.

A subarray is a contiguous part of an array.

Note that subarray of length `1` are always considered nice.

## Example:
```
Input: nums = [1, 3, 8, 48, 10]
Output: 3
Explanation: The longest nice subarray is [3, 8, 48] because
- 3 AND 8 = 0
- 3 AND 48 = 0
- 8 AND 48 = 0
```

## Key Idea
We can use a sliding window to solve this problem where all pairs of elements in the window is nice. The output that we are looking for is the longest possible window length.

To solve this problem, we can use a bitwise OR to track all elements. To add a new element, we can simply compare if AND between the two numbers. To remove an element from window, we can simply AND the inverse of this number in binary operation.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)