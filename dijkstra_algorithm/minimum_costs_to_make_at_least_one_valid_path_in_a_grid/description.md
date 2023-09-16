## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 1368

## Description
Given an `m x n` grid. Each cell fo the grid has a sign pointing to the next cell you should visit if you are currently in this cell. This sign of `grid[i][j]` can be:
  - `1` which means go to the cell to the right (i.e. go from `grid[i][j]` to `grid[i][j + 1]`)
  - `2` which means go to the cell to the left (i.e. go from `grid[i][j]` to `grid[i][j - 1]`)
  - `3` which means go to the cell to the lower cell (i.e. go from `grid[i][j]` to `grid[i + 1][j]`) 
  - `4` which means go to the cell to the upper cell (i.e. go from `grid[i][j]` to `grid[i - 1][j]`)

Notice that there could be some signs on the cells of the grid that point outside the grid. You will initially start at the upper left cell `(0, 0)`. A valid path in the grid is a path that starts from the upper left cell `(0, 0)` and ends at the bottom-right cell `(m - 1, n - 1)` following the signs on the grid. The valid path does not have to be the shortest. You can modify the sign on a cell with `cost = 1`. You can modify the sign on a cell one time only. Return the minimum cost toi make the grid have at least one valid path.

## Example
```
Input: grid = [[1, 1, 1, 1], [2, 2, 2, 2], [1, 1, 1, 1], [2, 2, 2, 2]]
Ouput: 3
Explanation: You will start at point (0, 0). The path to (3, 3) is: (0, 0) -> (0, 1) -> (0, 2) -> (0, 3) -> changes the arrow to down with a cost = 1 -> (1, 3) -> (1, 2) -> (1, 1) -> (1, 0) -> changes the arrow to down with cost = 2 -> (2, 0) -> (2, 1) -> (2, 2) -> (2, 3) -> changes the arrow to down with cost = 3 -> (3, 3). Thus the total cost = 3.
```

## Key Idea
We will first construct a graph. Since a cell can reach any of its neighbor cells, so for each cell, if it is pointing at the correct direction, then the edge of the cost is 0 otherwise the edge of the cost is 1. Thus, we convert this problem into a weighted graph and we want to find the minimum cost from (0, 0) to (m - 1, n - 1). Then we can apply the Dijkstra's algorithm to solve this problem.

## Solution
- [C++](solution.cpp)
