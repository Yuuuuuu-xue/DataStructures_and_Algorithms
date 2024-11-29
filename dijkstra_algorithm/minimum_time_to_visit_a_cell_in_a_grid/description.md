## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 2577

## Problem
You are given a `m x n` matrix `grid` consisting of non-negative integers where `grid[row][col]` represents the minimum time required to be able to visit the cell `(row, col)`, which means you can visit the cell `(row, col)` only when the time you visit it is greater than or equal to `grid[row][col]`.

You are standing in the top-left cell of the matrix in the `0` second, and you must move to any adjacent cell in the four directions: up, down, left, and right. Each move you make takes 1 second.

Return the minimum time required in which you can visit the bottom right cell of the matrix. If you cannot visit the bottom-right cell, then return `-1`.

## Example
```
Input: grid =
[[0, 1, 3, 2],
 [5, 1, 2, 5],
 [4, 3, 8, 6]]
Output: 7
Explanation:
- At time 0, we are on the cell (0, 0)
- At time 1, we move to cell (0, 1)
- At time 2, we move to cell (1, 1)
- At time 3, we move to cell (1, 2)
- At time 4, we move to cell (1, 1)
- At time 5, we move to cell (1, 2)
- At time 6, we move to cell (1, 3)
- At time 7, we move to cell (2, 3)

Input: grid =
[[0, 2, 4],
 [3, 2, 1],
 [1, 0, 4]]
Output: -1
Explanation: We stuck at the initial cell and we cannot move to anywhere.
```

## Key Idea
We can simply use Dijkstra's algorithm which use priority queue as the queue with BFS.

We want to visit the cell with minimum time possible, then we keep track of the time we need to reach to this cell as the entry in the heap.

When we push a new neighbor cell to heap, we update its time as
- If minimum time needed to reach to this cell + 1 >= time required at this neighbor cell, then use minimum time reach to current cell + 1
- Take the difference,
    - if the diff % 2 equals to 1, then it means that we can reach to the cell with time exactly the time needed at this cell
    - if the diff % 2 equals to 0, then it means that we need another step that moves back from current cell to the target cell
We don't need to visit the cell again because we can just update the time and keep bounce from current cell and next cell until we have enough time.

## Complexity Analysis
- Runtime Complexity: O(n * m * lg(n * m))
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)
