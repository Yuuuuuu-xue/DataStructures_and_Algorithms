# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 3151

## Problem
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integers `nums`. Return `true` if `nums` is a special array, otherwise, return `false`.

## Example
```
Input: nums = [1]
Output: true

Input: nums = [2, 1, 4]
Output: true
Explanation:
- Pair (2, 1) has different parity
- Pair (1, 4) has different parity
```

## Key Idea
Simply iterate over the array and compare adjacent elements

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)