# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1424

## Problem
Given a 2D integer array `nums`, return all elements of `nums` in diagonal order as shown in the below images.

## Example
```
Input: nums =
[[1, 2, 3],
 [4, 5, 6],
 [7, 8, 9]]
Output: [1, 4, 7, 5, 3, 8, 6, 9]

Input: nums =
[[1, 2, 3, 4, 5],
 [6, 7],
 [8],
 [9, 10, 11],
 [12, 13, 14, 15, 16]]
Output: [1, 6, 2, 8, 7, 3, 9, 4, 12, 10, 5, 13, 11, 14, 15, 16]
```

## Key Idea
Note this 2D array is not a rectangle. Thus we start from `(i, 0)` for `i` in each row. After we reach to the last row, we start with `(n - 1, j)` for `j` from `1` to `m - 1`.

Then for each iteration, we update `(x, y)` to `(x - 1, y + 1)` until we reach to `x = 0` or `y = m - 1`.

Alternatively, note all this diagonal has the same value `(i + j)`, then we can simply use a hash map to keep track all of the diagonals.

## Time Complexity
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)