# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium

## Problem
Given an array of integers `arr` and two integers `k` and `threshold`, return the number of sub-arrays of size `k` and average greather than or equal to `threshold`.

## Example
```
Input: arr = [2, 2, 2, 2, 5, 5, 5, 8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2, 5, 5], [5, 5, 5] and [5, 5, 8] have averages 4, 5, and 6 respectively.
```

## Key Idea
Simply use a window of fixed size `k` and sum of the window and move the window to the right. Keep updating the sum and calculate the average.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)