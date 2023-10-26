## LeetCode Problem
Medium 48

## Description
You are given an `n x n` 2D `matrix` representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. Do not allocate another 2D matrix and do the rotation.

## Example
```
matrix = 
[[1, 2, 3],
 [4, 5, 6], 
 [7, 8, 9]]
Output:
[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]

Input:
[[5, 1, 9, 11], 
 [2, 4, 8, 10],
 [13, 3, 6, 7],
 [15, 14, 12, 16]]
Output:
[[15, 13, 2, 5],
 [14, 3, 4, 1],
 [12, 6, 8, 9],
 [16, 7, 10, 11]]
```

## Key Idea
Traverse the input array circle by circle starting with the outer circle (i.e. first row, first column, last row, and last column). Then this has at most `n / 2` iterations and let `i` be this number. Then for each circle, we need to rotate clockwise. Note we can swap
- `(0, 0) = (n - 1, 0)`
- `(0, n - 1) = (0, 0)`
- `(n - 1, n - 1) = (0, n - 1)`
- `(n - 1, 0) = (n - 1, n - 1)`

Then this has `n - (i * 2)` iterations. And we need to swap the four numbers.

## Complexity Analysis
- Time Complexity: O(n ^ 2)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)