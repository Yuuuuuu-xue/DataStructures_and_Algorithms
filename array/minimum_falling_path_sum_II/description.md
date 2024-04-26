# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 1289

## Problem
Given an `n x n` integer matrix `grid`, return the minimum sum of a falling path with non-zero shifts.

A falling path with non-zero shifts is a choice of exactly one element from each row of `grid` such that no two elements chosen in adjacent rows are in the same column.

## Example
```
Input: grid =
[[1, 2, 3],
 [4, 5, 6],
 [7, 8, 9]]
Output: 13
Explanation: The smallest non-zero shifts path is 1 -> 5 -> 7 which has the sum of 13.
```

## Key Idea
In the idea case, we will use the minimum value for each row. However, there will be case where two minimums are in the adjacent rows and the same column. To handle this case, we keep two variables `smallest` and `second_smallest` and index of the previous row in `smallest`. When the column index is the same, then we should use `second_smallest` otherwise use `smallest` to keep track the path sum.

At the end, return `smallest`

## Complexity Analysis
- Runtime Complexity: O(n * n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)