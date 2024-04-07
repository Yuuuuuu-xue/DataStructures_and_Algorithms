## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 79

## Problem
Given an `m x n` grid of characters `board` and a string `word`, return `true` if `words` exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

## Example
Input: board =
[["A", "B", "C", "E"],
 ["S", "F", "C", "S"],
 ["A", "D", "E", "E"]]

## Key Idea
Since we will need to search neighbors, it provides a hint to use DFS to search the problem.

Since no letter can be used more than once, we can solve this problem with backtracking. Instead of using a hash set to keep track the visited cells, we can set the `grid[i][j]` to be `#` and set it back when backtracking.

## Complexity Anlaysis
- Runtime Complexity: O(n * n)
- Space Complexity: O(n * n) (at most n * n call stacks)

## Solution
- [Python](./solution.py)