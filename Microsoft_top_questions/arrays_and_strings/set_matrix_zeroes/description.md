## LeetCode Question
Medium 73

## Description
Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it in place.

## Example
```
Input: matrix =
  [[1, 1, 1],
   [1, 0, 1],
   [1, 1, 1]]
Output:
  [[1, 0, 1],
   [0, 0, 0],
   [1, 0, 1]]

Input: matrix =
  [[0, 1, 2, 0],
   [3, 4, 5, 2],
   [1, 3, 1, 5]]
Output:
  [[0, 0, 0, 0],
   [0, 4, 5, 0],
   [0, 3, 1, 0]]
```

## Key Idea
Notice, if we see a `0`, we cannot set the row and column immediately since we will loop over the next element which original value may not be `0` and thus it will set the entire matrix to be 0.

However, we can have the `rowSet` and `colSet` which will store the row and columns indices to set to `0`. This way, we can also avoid duplicate rows and iterate over the same row more than once.

## Complexity Analysis
- Time complexity: O(m * n)
- Space complexity: O(m + n)

## Solution
- [C++](solution.cpp)