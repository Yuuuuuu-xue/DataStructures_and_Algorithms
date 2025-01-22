## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1765

## Problem
You are given an integer matrix `isWater` of size `m x n` that represents a map of land and water cells.
- If `isWater[i][j] == 0`, cell `(i, j)` is a land cell
- If `isWater[j][j] == 1`, cell `(i, j)` is a water cell

You must assign each cell a height in a way that follows these rules:
- The height of each cell must be non-negative
- If the cell is a water cell, its height must be 0
- Any two adjacent cells must have an absolute height difference of at most `1`. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e. their sides are touching).

Find an assignment of heights such that the maximum height in the matrix is maximized.

Return an integer matrix `height` of size `m x n` where `height[i][j]` is cell `(i, j)`'s height. If there are multiple solutions, return any of them.

## Example
```
Input: isWater = 
[[0, 1],
 [0, 0]]
Output:
[[1, 0],
 [2, 1]]
```

## Key Idea
Simply use a multisource BFS. Loop over the matrix, if it is a water cell, push it to a queue.

Then loop over it with a counter of level, then mark each cell with level.

## Solution
- [Python Solution](./solution.py)
