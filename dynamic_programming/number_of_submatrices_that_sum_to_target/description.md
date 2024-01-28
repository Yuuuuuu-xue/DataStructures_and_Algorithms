## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1074

## Problem
Given a `matrix` and a `target`, return the number of non-empty submatrices that sum to target.

A submatrix `x1, y1, x2, y2` is the set of all cells `matrix[x][y]` with `x1 <= x <= x2` and `y1 <= y <= y2`.

Two submatrices `(x1, y1, x2, y2)` and `(x1', y1', x2', y2')` are different if they have some coordinate that is different: for example, if `x1 != x1'`.

## Example
```
Input: matrix =
[[0, 1, 0],
 [1, 1, 1],
 [0, 1, 0]], target = 0
Output: 4
```

## Key Idea
First of all, we can compute the prefix sum for each row of the matrix. Thus, let `s[i][j]` be the sum of `s[k][j]` for all `k <= i`.

Then, for each pair of column `j1` and `j2` and `j1 <= j2`, we can get the each row in between `j1` and `j2` in constant time, thus, just loop over each row, accumulate the sum, and store the result in a hashmap `m`. If `m[sum - target]` exists, then we can found a solution. Idea of two sum.

## Complexity Analysis
- Runtime Complexity:
  - O(n * m) to compute the prefix sum
  - O(n * m * m) to compute each column pair, and for each pair, iterate over each row
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)