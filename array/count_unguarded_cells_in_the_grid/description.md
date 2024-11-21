# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2257

## Problem
You are given two integers `m` and `n` representing a 0-indexed `m x n` grid. You are also given two 2D integer arrays `guards` and `walls` where `guards[i] = [row_i, col_i]` and `walls[j] = [row_j, col_j]` represent the positions of the `ith` guard and `jth` wall respectively.

A guard can see every cell in the four cardinal directions (north, east, south, or west) starting from their position unless obstructed by a wall or another guard. A cell is guarded if there is at least one guard that can see it.

Return the number of unoccupied cells that are not guarded.

## Example
```
Input: m = 4, n = 6, guards = [[0, 0], [1, 1], [2, 3]], walls = [[0, 1], [2, 2], [1, 4]]
Output: 7
```

## Key Idea
We can simply define a 2D matrix and initalize the cells with `0`, set wall to `1` and guard to `2`, when a guard visit a cell that is `0`, then update to `3` and increment the count.

At the end, return number of cells - num guards - num walls - num visited.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)