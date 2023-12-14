# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2482

## Problem
You are given a 0-indexed `m x n` binary matrix `grid`..

An 0-indexed `m x n` difference matrix `diff` is created with the following procedure:
- Let the number of ones in the `ith` row be `onesRow_i`
- Let the number of ones in the `jth` column be `onesCol_j`
- Let the number of zeroes in the `ith` row be `zerosRow_i`
- Let the number of zeros in the `jth` column be `zerosRow_j`
- `diff[i][j] = onesRow_i + onesCol_j - zerosRow_i - zerosCol_j`

Return the difference matrix `diff`.

## Example:
```
Input: grid =
[[0, 1, 1],
 [1, 0, 1],
 [0, 0, 1]]
Output:
[[0, 0, 4],
 [0, 0, 4],
 [-2, -2, 2]]

Input:
[[1, 1, 1],
 [1, 1, 1]]
Output:
[[5, 5, 5],
 [5, 5, 5]]
```

## Key Idea
Let `row` be an array that `row[i]` be the number of ones in row `i`.

Let `col` be an array that `col[j]` be the number of ones in col `j`.

Then simply loop over the array again, at `i` and `j`, then `grid[i][j] = row[i] + col[j] - (n - row[i]) - (m - col[j])`

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)
