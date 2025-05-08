## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 3342

## Problem
There is a dungeon with `n x m` rooms arranged as a grid.

You are given a 2D array `moveTime` of size `n x m`, where `moveTime[i][j]` represents the minimum time in seconds when you can start moving to that room. You start from the room `(0, 0)` at time `t = 0` and can move to an adjacent room. Moving between adjacent rooms takes one second for one move and two seconds for the next, alternating between the two.

Return the minimum time to reach the room `(n - 1, m - 1)`.

Two rooms are adjacent if they share a common wall, either horizontally or vertically.

## Example
```
Input: moveTime = [[0, 4], [4, 4]]
Output: 7
Explanation:
- At time `t == 4`, move from room (0, 0) to (1, 0) in one second
- At time `t == 5`, move from room (1, 0) to (1, 1) in two seconds
```

## Key Idea
Very similar to problen 3341. The difference is that in 3341, it always takes one second to move between rooms.

For this problem, it takes one second or two seconds, alternating between them.

Thus, to solve this problem, we can simply add an index and take one second or two seconds.

## Complexity Analysis
- Runtime Complexity: O(n * m * lg (n * m))
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)
