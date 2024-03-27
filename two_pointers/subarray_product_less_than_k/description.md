# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 713

## Problem
Given an array of integers `nums` and an integer `k`, return the number of continguous subarray where the product of all the elements in the subarray is strictly less than `k`.

## Example:
```
Input: nums = [10, 5, 2, 6], k = 100
Output: 8
Explanation: The 8 subarrays are
1. [10]
2. [5]
3. [2]
4. [6]
5. [10, 5]
6. [5, 2]
7. [2, 6]
8. [5, 2, 6]
```

## Key Idea
Simply use two pointers as a sliding window where we keep the product of all elements in the window to be less than `k`. At each iteration, we can add the window size to the num subproduct.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)