## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2610

## Problem
You are given an integer array `nums`. You need to create a 2D array from `nums` satisfying the following conditions:
- The 2D array should contain only the elements of the array `nums`
- Each row in the 2D array contains distinct integers
- The number of rows in the 2D array should be minimal

Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.

## Example:
```
Input: nums = [1, 3, 4, 1, 2, 3, 1]
Output: [[1, 3, 4, 2], [1, 3], [1]]

Input: nums = [1, 2, 3, 4]
Output: [[4, 3, 2, 1]]
```

## Key Idea
Let `m` be a map that maps the number of its occurrence. Then the number of rows in the 2D array (minimal length) equals to the largest occurrence.

Thus simply build a map, then iterate over the `m` to build the 2D array, put each duplicate value in different rows

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
