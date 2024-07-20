# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1605

## Problem
You are given two arrays `rowSum` and `colSum` of non-negative integers where `rowSum[i]` is the sum of the elements in the `ith` row and `colSum[j]` is the sum of the elements of the `jth` column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

Find any matrix of non-negative integers of size `rowSum.length x colSum.kength` that satisfies the `rowSum` and `colSum` requirements.

Return a 2D array representing any matrix that fulfills the requirements. It's guaranteed that at least one matrix that fulfills the requirements exists.

## Example
```
Input: rowSum = [3, 8], colSum = [4, 7]
Output: [[3, 0], [1, 7]]
```

## Key Idea
For each number `matrix[i][j]`, it will be the value of `min(rowSum[i], colSum[j])` and then subtract it from `rowSum` and `colSum`.

## Runtime Complexity
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)
