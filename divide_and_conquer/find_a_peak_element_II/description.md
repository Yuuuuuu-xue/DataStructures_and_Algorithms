## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1901

## Description
A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom. Given a 0-indexed m x n matrix `mat` where no two adjacent cells are equal, find any peak element `mat[i][j]` and return the length 2 array `[i, j]`.

You may assume that the netire matrix is surrounded by an outer perimeter with the value `-1` in each cell.

You must write an algorithm that runs in `O(m log n)` or `O(n log m) time`.

## Example
```
Input: mat = 
  [[1, 4],
   [3, 2]]
Output: [0, 1]
Explanation: both 3 and 4 are peak elements so [1, 0] and [0, 1] are both acceptable answers.

Input mat =
  [[10, 20, 15],
   [21, 30, 14],
   [7, 16, 32]]
Output: [1, 1]
Explanation: both 30 and 32 are peak elements so [1, 1] and [2, 2] are both acceptable answers.
```

## Basic Idea
To understand why we can use the binary search to solve this problem for 1D array. For given array `nums` and index i and j and mid = (i + j) / 2. Note if `nums[mid] > nums[mid - 1]` and `nums[mid] > nums[mid + 1]`, then we found a solution. If `nums[mid] < nums[mid - 1]`, this means there is at least one number > `nums[mid]`. Therefore it implies the left side of the list must have a peak.

Now for 2D matrix, we can apply the same trick to this problem. For given matrix `
[[10, 20, 15],
 [21, 30, 14],
 [7, 16, 32]]
`, we will find a mid column, then for each column, we find the row that has maximum value on this column. Then the cell at the row with maximum value and mid column will be our cell (similar to the mid value for 1D array) and we can apply the same trick.

## Solution
- [C++](./solution.cpp)