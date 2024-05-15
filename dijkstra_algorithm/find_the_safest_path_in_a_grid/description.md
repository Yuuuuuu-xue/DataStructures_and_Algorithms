## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 2812

## Problem
You are given a 0-indexed 2D matrix `grid` of size `n x n`, where `(r, c)` represents:
- A cell containing a thief if `grid[r][c] = 1`
- An empty cell if `grid[r][c] = 0`

You are initially positioned at cell `(0, 0)`. In one move, you can move to any adjacent cell in the grid, including cells containing thieves.

The safeness factor of a path on the grid is defined as the minimum manhattan distance from any cell in the path to any thief in the grid.

Return the maximum safeness factor of all paths leading to cell `(n - 1, n - 1)`.

An adjacent cell of cell `(r, c)` is one of the cells `(r, c + 1)`, `(r, c - 1)`, `(r + 1, c)`, and `(r - 1, c)` if it exists.

The Manhattan distance between wo cells `(a, b)` and `(x, y)` is equal to `|a - x| + |b - y|` where `|val|` denotes the absolute value of val.

## Example
```
Input: grid = 
[[1, 0, 0],
 [0, 0, 0],
 [0, 0, 1]]
Output: 0
Explanation: all paths from `(0, 0)` to `(n - 1, n - 1)` go though the thieves in cells (0, 0) and (n - 1, n - 1).

Input: grid =
[[0, 0, 1],
 [0, 0, 0],
 [0, 0, 0]]
Output: 2
Explanation: The path is from top left corner to bottom left corner to the bottom right corner. The distance between them is 2 to the closest thief from any cell in the path.
```

## Key Idea
Note, we will build a weighted graph. Let `d[i][j]` be the minimum distance from cell `(i, j)` to any cell that contains theif. To compute `d[(i, j)]`, we can start with all the theif cells and use BFS level by level to find out the minimum distance from any cell `(i, j)` to a theif.

Once we have computed the `d`. We can convert it as a weighted graph. But we do not accumulate the distance, instead, we keep track of minimum hamming distance from current cell to the final distance. To find it, we can use dijkstra's algorithm to find the mininum distance. However, we want to keep track maximum distance, we will use `-1 * distance`.

## Complexity Analysis
- Runtime Complexity:
  - O(n * m) to keep lop over graph to find the theif
  - O(n * m) to perform the binary search
  - O(n * m * lg (n * m)) to perform dijkstra's algorithm
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
