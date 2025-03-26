## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2033

## Problem
You are given a 2D integer `grid` of size `m x n` and an integer `x`. In one operation, you can add `x` to or subtract `x` from any element in the grid.

A uni-value grid is a grid where all the element of it are equal.

Return the minimum number of operations to make the grid uni-value. If it is not possible, return `-1`.

## Example
```
Input: grid = [[2, 4], [6, 8]], x = 2
Output: 4
```

## Key Idea
Simply convert the 2D array into 1D arary.

Then we can check if all elements divide `x` and check if the remainder is the same or not.

Then, we can simply find the middle element and simply loop over all elements and move all elements to this median number

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
