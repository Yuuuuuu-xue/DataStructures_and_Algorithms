# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1208

## Problem
You are given two strings `s` and `t` of the same length and an integer `maxCost`.

You want to change `s` to `t`. Changing the `ith` character of `s` and `ith` character of `t` costs `|s[i| - t[i]|` (i.e., the absolute difference between the ASCII values of the characters).

Return the maximum length of a substring of `s` that can be  changed to be the same as the corresponding substring of `t` with a cost less than or equal to `maxCost`. If there is no substring from `s` that can be changed to its corresponding substring from `t`, return `0`.

## Example:
```
Input: s = "abcd", t = "bcdf", maxCost = 3Output: 3
Explanation: "abc" of s can be changed to "bcd". That costs 3, so the maximum length is 3.
```

## Key Idea
Basically this problem asks to find the longest substring where the absolute difference sum `<= maxCost`.

Then simply we can use a sliding window to solve this problem. We keep track the window such that the absolute difference sum in the window is `<= maxCost`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)