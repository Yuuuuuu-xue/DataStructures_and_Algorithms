## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 417

## Description
There is an `m x n` rectangular island that borders both the Pacific Ocean and Atlantic Ocean. The pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges.

For example:
```
  [[P, P, P, P, P, P, P],
   [P, 1, 2, 2, 3, 5, A],
   [P, 3, 2, 3, 4, 4, A],
   [P, 2, 4, 5, 3, 1, A],
   [P, 6, 7, 1, 4, 5, A],
   [P, 5, 1, 1, 2, 4, A],
   [A, A, A, A, A, A, A]]
```
where P represents the Pacific Ocean and Atlantic Ocean.

The island is partitioned into a grid of square cells. You are given an `m x n` integer matrix `heights` where `heights[r][c]` represents the height above sea level of the cell at coordinate (r, c). The island receives a lot oof rain, and the rain water can flow to neighboring cells directly north, south, east, and west if the neighboring cell's height is less than or equal to the current cell's height. Water can flow from any cell adjacent to an ocean into the ocean. Return a 2D list of gird coordinates `result` where `result[i] = [r_i, c_i]` denotes the rain water can flow from cell `(r_i, c_i)` to both the Pacific and Atlantic Ocean. 

## Example
```
Input: heights =
  [[1, 2, 2, 3, 5],
   [3, 2, 3, 4, 4],
   [2, 4, 5, 3, 1],
   [6, 7, 1, 4, 5],
   [5, 1, 1, 2, 4]]
Output: [[0, 4], [1, 3], [1, 4], [2, 2], [3, 0], [3, 1], [4, 0]]
```

## Key Idea
Let's find the coordiantes of the water can flow into Pacific Ocean and store them in a set `p`. Similarly, store coordinates of water can flow into Atlantic Ocean and store those coordinates in a set `a`. Then, the intersection of the set is our solution. Notice, we can move either north, sourth, east, and west, it gives us a hint of either using DFS or BFS to solve this problem. If we choose to use BFS, then we can have two queue, starting with all the cells next to Pacific Ocean and Atlantic Ocean and see if what coordinates can flow into those coordinates.

## Solution
- [C++](solution.cpp)
