## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2966

## Description
You are given an integer array `nums` of size `n` and a positive integer `k`.

Divide the array into one or more arrays of size `3` satisfying the following conditions:
- Each element of `nums` should be in exactly one array
- The difference between any two elements in one array is less than or equal to `k`

Return a 2D array containing all the arrays. If it is impossible to satisfy the conditions, returns an empty array. And if they are multiple answers, return any of them.

## Example
```
Input: nums = [1, 3, 4, 8, 7, 9, 3, 5, 1], k = 2
Output: [[1, 1, 3], [3, 4, 5], [7, 8, 9]]
```

## Key Idea
Simply sort the array, then group the smallest three elements and repeat the same process.

For `ith` element, we store `ith`, `i + 1`, and `i + 2` element in the arrays which are three consecutive elements in the sorted array. If the difference between `i + 2` and `i` is large than `k`, we can return empty array.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
