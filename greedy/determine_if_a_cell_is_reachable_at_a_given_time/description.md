## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2849

## Problem
You are given four integers `sx`, `sy`, `fx`, `fy` and a non-negative integer `t`.

In an infinite 2D grid, you start at the cell `(sx, sy)`. Each second, you must move to any of its adjacent cells.

Return `true` if you can reach cell `(fx, fy)` after exactly `t` seconds, or `false` otherwise.

A cell's adjacent cells are the 8 cells around it that share at least one corner with it. You can visit the cell several times.

## Example:
```
Input: sx = 2, sy = 4, fx = 7, fy = 7, t = 6
Output: true
Explanation:
- Starting at the cell (2, 4) to (7, 7) and able to reach to within 6 seconds

Input: sx = 3, sy = 1, fx = 7, fy = 3, t = 3
Output: false
Explanation:
- Starting at the cell (3, 1) to (7, 3) and cannot reach to within 3 seconds
```

## Key Idea
It is possible to solve this problem with BFS but it is possible to solve this problem with `O(1)`.

Note the shortest distance between two points is the diagonal line between two points. Thus, we will try to move diagonally as much as we can until
- `sx == fx && sy == fy`, than we are done
- `sx == fx`, then need to move vertially until `sy == fy`
- `sy == fy`, then need to move horizontally until `sx == fx`

To calculate the number of steps we can move diagonally, we can calculate
- `diffX = abs(sx - fx)`
- `diffY = abs(sy - fy)`
- `numDiagonalMoves = min(diffX, diffY)`
- `numHorizontalMoves = max(0, diffX - numDiagonalMoves)`
- `numVertivalMoves = max(0, diffY - numDiagonalMoves)`
- `minMove = numDiagonalMoves + numHorizontalMoves + numVerticalMoves`

## Complexity Analysis
- Runtime Complexity: O(1)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
