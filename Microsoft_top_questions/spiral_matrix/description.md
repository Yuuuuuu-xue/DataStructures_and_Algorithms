## LeetCode Question
Medium 54

## Description
Given an `m x n` matrix, return all elements of the `matrix` in spiral order. Assume `-100 <= matrix[i][j] <= 100`.

## Example
```
Input:
  [[1, 2, 3]
   [4, 5, 6],
   [7, 8, 9]]
Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

Input:
  [[1, 2, 3, 4],
   [5, 6, 7, 8],
   [9, 10, 11, 12]]
Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
```

## Key Idea
We can simply let `directions = {right, bottom, left, up}` and let `d` be a direction index with initial value right. We can continue to move with matrix until we react to the end or a visited cell, then we increment `d` and change direction. We can use `d % 4` so it will keep change the direction when it reach to the left. If we reach to a sell that after changed the direction, it still cannot move, then we reach to the end and we can return the output array.

Now, the problem is that how do we know if we visited a cell or not. We can use a hashset to keep track the visited cell but it will require `O(n)` space. However, since we can assume `-100 <= matrix[i][j] <= 100`, then simply modify the cell to have a value of `101` which represents a visited cell.

## Complexity Analysis
- Time complexity: O(m * n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)