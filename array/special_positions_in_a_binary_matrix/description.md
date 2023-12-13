# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1582

## Problem
Given an `m x n` binary matrix `mat`, return the number of special positions in `mat`.

A position `(i, j)` is called special if `mat[i][j] == 1` and all other elements in row `i` and column `j` are `0` (rows and columns are 0-indexed).


## Example
```
Input: mat =
[[1, 0, 0],
 [0, 0, 1],
 [1, 0, 0]]
Output: 1

Input: mat =
[[1, 0, 0],
 [0, 1, 0],
 [0, 0, 1]]
Output: 3
```

## Key Idea
Traverse all the rows that store all the row index `i` such that `row[i]` has exactly one, then traverse the corresponding index `j`, if it has exactly 1 then increment the output counter

## Complexity
- Time Complexity: O(n ^ 2)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)