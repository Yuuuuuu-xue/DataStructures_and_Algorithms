# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2965

## Problem
You are given a 0-indexed 2D integer matrix `grid` of size `n * n` with values in the range `[1, n^2]`. Each integer appears exactly once except `a` which appears twice and `b` which is missing. The task is to find the repeating and missing numbers `a` and `b`.

Return a 0-indexed integer array `ans` of size `2` where `ans[0]` equals to `a` and `ans[1]` equals to `b`.

## Example:
```
Input: grid = [[1, 3], [2, 2]]
Output; [2, 4]
```

## Key Idea
Simply convert it with a dict and loop over all numbers to find out a number occurs twice and one does not occur.

## Complexity Analysis
- Runtime Complexity: O(n * n)
- Space Complexity: O(n * n)

## Solution
- [Python](./solution.py)