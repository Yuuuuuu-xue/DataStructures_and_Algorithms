# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 796

## Problem
Given two strings `s` and `goal`, return `true` if and only if `s` can become `goal` after some number of shifts on `s`.

A shift on `s` consists of moving the leftmost character of `s` to the rightmost position.
- For example, if `s = "abcde"`, then it will be `"bcdea"` after one shift.

## Example
```
Input: s = "abcde", "cdeab"
Output: true
```

## Key Idea
For rotation, we can simply check if `goal` is a substring of `s + s`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)