## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 576

## Problem
There is an `m x n` grid with a ball. The ball is initially at the position `[startRow, startColumn]`. You are allowed to move the ball to one of the four adjacent cells in the grid (possibly out of the grid crossing the grid boundary). You can apply at most `maxMove` moves to the ball.

GIven the five integers `m`, `n`, `maxMove`, `startRow`, `startColumn`, return the number of paths to move the ball out of the grid boundary. SInce the answer can be very large, return it modulo `10 ** 9 + 7`

## Example
```
Input: m = 2, n = 2, moveMove =2, startRow = 0, startColumn = 0
Output: 6
```

## Key Idea
Simply use a dfs to solve this problem, when moving out of boundary, increment the output by 1.

## Complexity Analysis
- Runtime Complexity: O(n * m * maxMove)
- Space Complexity: O(n * m * maxMove)

## Solution
- [C++](solution.cpp)
