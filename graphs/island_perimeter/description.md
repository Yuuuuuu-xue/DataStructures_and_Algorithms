## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 463

## Problem
You are given `row x col` `grid` representing a map where `grid[i][j] = 1` represents land and `grid[i][j] = 0` represents water.

Grid cells are connected horizontally/vertically (not diagonally). The `grid` is completely surrounded by water, and there is exactly one island (i.e. one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't conncted to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

## Example
Input: grid =
[[0, 1, 0, 0],
 [1, 1, 1, 0],
 [0, 1, 0, 0],
 [1, 1, 0, 0]]
Output: 16

## Key Idea
We can simply use DFS to find out the conncted island. To calculate the perimeter, note, for any square `s`, the perimeter sum up for any direction that is not a land. Thus, when we visit an island, add perimeter if given direction is not an island.

## Complexity Analysis
- Runtime Complexity: O(n^2)
- Space Complexity: O(n^2) worst case visit all the cells in the call stack

## Solution
- [Python](./solution.py)
