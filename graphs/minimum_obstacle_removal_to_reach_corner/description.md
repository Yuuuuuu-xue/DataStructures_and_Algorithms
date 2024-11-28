## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 2290

## Problem
You are given a 0-indexed 2D integer array `grid` of size `m x n`. Each cell has one of two values:
- 0 represents an empty cell,
- 1 represents an obstacle that may be removed

You can move up, down, left, or right from and to an empty cell.

Return the minimum number of obstacles to remove so you can move from the upper left corner `(0, 0)` to the lower right corner `(m - 1, n - 1)`.

## Example
```
Input: grid = 
[[0, 1, 1],
 [1, 1, 0],
 [1, 1, 0]]
Output: 2
Explanation: After 2 removal, the grid:
[[0, 0, 0],
 [1, 1, 0],
 [1, 1, 0]]
```

## Key Idea
We can simply use DFS to traverse the cell without obstacle first, then traverse with obstacle. To achieve that, we can use DFS with iterative approach by using a deque. When visit a cell, we push to the left of the deque if the next cell does not have an obstacle and right of the deque if it has the obstacle.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)
