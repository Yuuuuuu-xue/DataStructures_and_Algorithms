# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 661

## Problem
An image smoother is a filter of the size `3 x 3` that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present, we do not consider it in the average.

## Example
```
Input: img = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
Output: [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
```

## Key Idea
Simply traverse each cell and calculate the average of the nine cells.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution:
- [C++](./solution.cpp)
