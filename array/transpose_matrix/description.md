# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 867

## Problem
Given a 2D integer array ```matrix```, return the transpose of ```matrix```. The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indicies.

## Example
```
Input: matrix = 
  [[1, 2, 3],
   [4, 5, 6],
   [7, 8, 9]]
Output:
  [[1, 4, 7],
   [2, 5, 8],
   [3, 6, 9]]

Input: matrix =
  [[1, 2, 3],
   [4, 5, 6]]
Output:
  [[1, 4],
   [2, 5],
   [3, 6]]
```

## Key Idea
Given a matrix of m * n, simply define a dp n * m matrix and loop over matrix[i][j] and set it to dp[j][i].

## Solution
- [Java Solution](transpose_matrix.java)