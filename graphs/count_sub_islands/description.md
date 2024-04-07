## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1905

## Problem
You are given two `m x n` binary matrices `grid1` and `grid2` containing only `0`'s (representing water) and `1`'s (representing land). An island is a group of `1`'s conncted 4-directionarlly (horizontal or vertical). Any cells outside of the grid are considered water cells.

An island in `grid2` is considered a sub-island if there is an island in `grid1` that contains all the cellls that make up this island in `grid2`.

Return the number of islands in `grid2` that are considered sub-islands.
 
## Example
```
Input:
grid1 = [
  [1, 1, 1, 0, 0],
  [0, 1, 1, 1, 1],
  [0, 0, 0, 0, 0],
  [1, 0, 0, 0, 0],
  [1, 1, 0, 1, 1], 
]

grid2 = [
  [1, 1, 1, 0, 0],
  [0, 0, 1, 1, 1],
  [0, 1, 0, 0, 0],
  [1, 0, 1, 1, 0],
  [0, 1, 0, 1, 0]
]

Output: 3
```

## Key Idea
We can simply use a DFS/BFS to find out all the neighbors of second `grid2`, when we find out each subisland, we can check if cooresponding position at `grid1` is a `0` or `1`. If it is a `0`, then we can find out the entire island in `grid2` at that position and does not increment the `num_subislands`. If all the cells in the current island have a corresponding cell in `grid1` with a value of `1`, then we can increment `num_subislands` by 1 for this island.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution:
- [Python](./solution.py)