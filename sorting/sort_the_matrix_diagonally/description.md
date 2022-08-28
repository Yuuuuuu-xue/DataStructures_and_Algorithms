## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1329

## Description
A matrix diagonal is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom right direction until reaching the matrix's end. For example, the matrix diagonal starting from `mat[2][0]`, where `mat` is a `6 x 3` matrix, including cells `mat[2][0]`, `mat[3][1]`, and `mat[4][2]`.

Given an `m x n` matrix `mat` of integers, sort each matrix diagonal in ascending order and return the resuling matrix.

## Example
```
Input: mat =
  [[3, 3, 1, 1],
   [2, 2, 1, 2],
   [1, 1, 1, 2]]
Output:
  [[1, 1, 1, 1],
   [1, 2, 2, 2],
   [1, 2, 3, 3]]
```

## Key Idea
Note to get each values on the anti-diagonal, we can use `i - j` as a key. Then simply sort each anti-diagonal and we need to fill the matrix. We can start with the smallest value of `i - j` which will be the top-rigth corner with a value of `0 - n` and largest value will be `m - 0`. Thus, for each key, we will start with `i = m` and `j = key - m`. While valid `i` and `j`, then we increment `i` and `j`, if not valid, we move to the next key.

## Complexity Analysis
- Runtime Complexity: We will have a total of `n` anti-diagonals where each diagonal has a maximum length of `min(m, n)`. Thus, `O(n * log (min(n, m)) * min(n, m))`.
- Space Complexity: `O(n * m)`

## Solution
- [C++](solution.cpp)
