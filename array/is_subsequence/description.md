# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 392

## Problem
Given two string `s` and `t`, return `true` if `s` a subsequence of `t`, or `false` otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative position of the remaining characters (i.e. `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).

## Example
```
Input: s = "abc", t = "ahbgdc"
Output: true

Input: s = "axc", t = "ahbgdc"
Output: false
```

## Key Idea
The key idea is to use two pointers `currS` and `currT`. If `s[currS] == t[currT]`, then we can increment `currS` and `currT` both by 1. Otherwise we only increment `currT` by 1. We stop when `currS >= s.len() || currT >= t.len()`. At the end, return `currT == t.len()` 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)