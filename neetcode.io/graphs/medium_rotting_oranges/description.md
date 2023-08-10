## LeetCode Problem
Medium 994

## Description
You are given an `m x n` `grid` where each cell can have one of three values:
- `0` representing an empty cell
- `1` representing a fresh orange, or
- `2` representing a rotten orange

Every minute, nay fresh orange that is 4 directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return `-1`.

## Example
```
Input: grid = 
[[2,1,1],
 [1,1,0],
 [0,1,1]]
Output: 4

Input: grid = 
[[2,1,1],
 [0,1,1],
 [1,0,1]]
Output: -1

Input: grid =
[[0,2]]
Output: 0
```

## Basic Idea
First of all, we can loop over all the cells to find the initial rotten oranges. Those cells will be the initial cells in the BFS. Then simply run bfs level by level so we can the number of levels = number of minutes. At the end, return level if all the fresh oranges become rotten orange otherwise -1.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)