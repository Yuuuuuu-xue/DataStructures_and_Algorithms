## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Hard 329

## Problem
Given an ```m * n``` integers ```matrix```, return the length of the longest increasing path in ```matrix```.

From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e. wrap-around is not allowed).

## Example
```
Input: matrix =
  [[9, 9, 4], 
   [6, 6, 8],
   [2, 1, 1]]
Output: 4
Explanation: the longest increasing path is 1 -> 2 -> 6 -> 9


Input: matrix = 
  [[3, 4, 5],
   [3, 2, 6],
   [2, 2, 1]]
Output: 4
Explanation: 3 -> 4 -> 5 -> 6

Input: matrix = 
  [[17,  4,  6, 11,  4,  0, 17, 12, 19, 12, 12,  0],
   [ 0,  6,  4,  4,  5,  9, 15,  1, 11, 13, 18,  0],
   [ 4,  2, 13,  1,  2,  7, 15,  5, 14,  6,  8,  6]]
Output: 6
Explanation: 1 -> 2 -> 5 -> 9 -> 15 -> 17
```


## Key Idea 
Notice since we want to find the longest increasing path, clearly we should use DFS. But note, for the longest path a_1 -> a_2 -> ... -> a_n starting at a_1, then a_2 -> ... -> a_n must be a longest path starting at a_2. Thus, the key idea is to use dynamic programming with DFS to solve this problem. We will loop over every cell (i, j). If (i, j) is in the dp then continue with next cell. Otherwise, we will perform a DFS to search around the cells for 4 direction (i', j'), return 0 if they are out of boundary. Then set the dp of (i, j) to the value returned by DFS + 1.

## Solution:
- [Java Solution](longest_increasing_path_in_a_matrix.java)