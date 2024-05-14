## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Mediun 1219

## Problem
In a gold mine `grid` of size `m x n`, each cell is this mine has an integer representing the amount of gold you can collect under the conditions:
- Every time you are located in a cell you will collect all the gold in that cell
- From your position, you can walk one step to the left, right, up or down
- You can't visit the same cell more than once
- Never visit a cell with `0` gold
- You can start and stop collecting gold from any position in the grid that has some gold

Assume there are at most 25 cells containing gold.

## Example:
```
Input: grid =
[[0, 6, 0],
 [5, 8, 7],
 [0, 9, 0]]
Output: 24
Explanation: path to get the maximum gold: 9 -> 8 -> 7 = 24
```

## Key Idea
We can simply use DFS to visit all the neighbors. Since if we visit left cell, then we cannot visit left cell again. Thus, we can use backtrack with DFS to solve this problem.

Thus, when we visit the current cell at `(i, j)`, we can mark cell `(i, j)` as `0` and visit the neighbor cell. After we finish, we can backtrack and set `(i, j)` to its original value.

## Complexity Analysis
- Runtime Complexity: 
  - We need to iterate over the all the cells thus O(n * m)
  - For each cell, we have at most `k` recursive depth calls where `k <= 25` is the maximum number of gold cells and for each recursive call, we have 4 directions, thus `4 ^ k`
  - Overall O(n * m * 4 ^ k)
- Space Complexity: O(4 ^ k)

## Solution
- [Python](./solution.py)