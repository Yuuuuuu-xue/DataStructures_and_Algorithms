## LeetCode Problem
Medium 130

## Description
Given an `m x n` matrix `board` containing `'X'` and `'O'`, capture all regions that are 4 directionally surrounded by `'X'`.

A region is captured by flipping all `'O'` into `'X'` in that surrounded region.

## Example
```
Input:
[["X","X","X","X"],
 ["X","O","O","X"],
 ["X","X","O","X"],
 ["X","O","X","X"]]

Output:
[["X","X","X","X"],
 ["X","X","X","X"],
 ["X","X","X","X"],
 ["X","O","X","X"]]
```

## Basic Idea
Notice the only possible wayts that `'O'` is not surrounded by `'X'` is in the border of the board. Thus we can simply run BFS on every `O` that is in the border and store those indices in a set. At the end, simply loop over, it there is `O` that is not in the set, then we can simply convert it into `X`.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)