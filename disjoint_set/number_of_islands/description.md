## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 200

## Description
Given an `m x n` 2D binary grid which represents a map of `1`'s (land) and `0`s (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

## Example
```
Input: grid =
  [['1', '1', '1', '1', '0'],
   ['1', '1', '0', '1', '0'],
   ['1', '1', '0', '0', '0'],
   ['0', '0', '0', '0', '0']]
Output: 1

Input: grid =
  [['1', '1', '0', '0', '0'],
   ['1', '1', '0', '0', '0'],
   ['0', '0', '1', '0', '0'],
   ['0', '0', '0', '1', '1']]
Output: 3
```

## Key Idea
Notice we can map each land to a disjoint set. If two land are adjacent, then they will be the same group in the disjoint set. Thus, we will loop over each cell, if the adjacent cell has a value of 1, then we will union them. At the end, simply loop over the matrix again and check if a cell has a value 1 and its parent is itself, then increment the number of island by 1.

We can avoid the last loop at the end by when we loop over the matrix first time, we store the number of `1`'s. Then, if `unionSets` return True, we decrement the counter by `1` since two land becomes one island. At the end, this counter will be our final solution.

## Complexity Analysis
- Runtime Complexity: Since we implement the disjoint set with path compression and union find, then the time complexity will just O(n * m)
- Space Complexity: O(n * m) for the disjoint set

## Solution:
- [C++](soluition.cpp)