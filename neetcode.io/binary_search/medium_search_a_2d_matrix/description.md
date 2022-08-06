## LeetCode Problem
Medium 74

## Description
Write an efficient algorithm that searches for a value `target` in an `m x n` integer matrix `matrix`. This matrix has the following properties:
- Integers in each row are sorted from left to right
- The first integer of each row is greater than the last integer of the previous row

## Example
```
Input: matrix =
  [[1, 3, 5, 7],
   [10, 11, 16, 20],
   [23, 30, 34, 60]], target = 3
Output: true
```

## Basic Idea
By assumption, we can simply use this matrix as an one dimensional array and thus apply the binary search. Let left = 0 and right = m * n - 1. Then when access the array[mid], we can use mid // n to get the row and mid % n to get the column.

## Solution
- [C++](./solution.cpp)