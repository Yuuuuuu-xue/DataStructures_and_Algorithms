## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 3341

## Problem
There is a dungeon with `n x m` rooms arranged as a grid.

You are given a 2D array `moveTime` of size `n x m`, where `moveTime[i][j]` represents the minimum time in seconds when you can start moving to that room. You start from the room `(0, 0)` at time `t = 0` and can move to an adjacent room. Moving between adjacent rooms takes exactly one second.

Return the minimum time to reach the room `(n - 1, m - 1)`.

Two rooms are adjacent if they share a common wall, either horizontally or vertically.

## Example
```
Input: moveTime = [[0, 4], [4, 4]]
Output: 6
Explanation:
The minimum time required is 6 seconds
- At time t == 4, move from room (0, 0) to room (1, 0) in one second
- At time t == 5, move from room (1, 0) to room (1, 1) in one second
```

## Key Idea
We can simply solve this problem with BFS with heap (to visit the non visit node with minimum cost). This is the dijkstra's algorithm.

Then, we use a heap to push the time to take to reach to a cell (i, j). At the end, return the minimum time reach to (n - 1, m - 1).

## Complexity Analysis
- Runtime Complexity: O(n * m * lg (n * m))
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)
