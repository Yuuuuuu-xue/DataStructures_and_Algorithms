## LeetCode Problem
Medium 695

## Description
You are given an `m x n` binary matrix `grid`. An island is a group of `1`'s (representing land) connected 4-directionally (horizontal or vertical). You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value `1` in the island.

Return the maximum area of an island in `grid`. If there is no island, return `0`.

## Example
```
Input:
[[0,0,1,0,0,0,0,1,0,0,0,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,1,1,0,1,0,0,0,0,0,0,0,0],
 [0,1,0,0,1,1,0,0,1,0,1,0,0],
 [0,1,0,0,1,1,0,0,1,1,1,0,0],
 [0,0,0,0,0,0,0,0,0,0,1,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6

Input: grid = [[0,0,0,0,0,0,0,0]]
Output: 0
```

## Basic Idea
We can either run a `BFS` for every node (not traverse if not visited) or use a disjoint set to group all the connected islands to one group, then the final maximum island.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)