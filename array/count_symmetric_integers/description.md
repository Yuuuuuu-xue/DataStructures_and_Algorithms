# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2843

## Problem
You are given two positive integers `low` and `high`.

An integer `x` consisting of `2 * n` digits is symmetric if the sum of the first `n` digits of `x` is equal to the sum of the last `n` digits of `x`. Numbers with an odd number of digits are never symmetric.

Return the number of symmetric integers in the range `[low, high]`.

## Example:
```
Input: low = 1200, high = 1230
Output: 4
Explanation: There are 4 symmetric integers between 1200 and 1230: 1203, 1212, 1221, 1230
```

## Key Idea
Simple loop
 
## Complexity Analysis
- Runtime Complexity: O(n + d)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)