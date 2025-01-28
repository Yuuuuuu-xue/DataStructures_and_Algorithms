## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2658

## Problem
You are given a 0-indexed 2D matrix `grid` of size `m x n`, where `(r, c)` represents:
- A land cell if `grid[r][c] = 0`, or
- A water cell containing `grid[r][c]` fish, if `grid[r][c] > 0`

A fisher can start at any water cell `(r, c)` and can do the following operations any number of times:
- Catch all the fish at cell `(r, c)` or
- Move to any adjacent water cell

Return the maximum number of fish the fisher can catch if he chooses his starting cell optimally, or `0` if no water cel exists.

An adjacent cell of the cell `(r, c)` is one of the cells `(r, c + 1)`, `(r, c - 1)`, `(r + 1, c)`, or `(r - 1, c)` if it exists.

## Example
```
Input: grid =
[[0, 2, 1, 0],
 [4, 0, 0, 3],
 [1, 0, 0, 4],
 [0, 3, 2, 0]]
Output: 7
Explanation: The fisher can start at cell (1, 3) and collect 3 fish, then move to cell (2, 3) and collect 4 fish.
```

## Key Idea
We can simply use BFS or DFS to find out all connected nodes's maximum number of fishes.

However, we could also use a disjoint set to solve this problem. Where we can put to adjacent fish cell together and update the total number fishes in this group. At the end, return the max.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution:
- [Python](./solution.py)