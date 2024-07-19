# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1380

## Problem
Given an `m x n` matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

## Example
```
Input: matrix = 
[[3, 7, 8],
 [9, 11, 13],
 [15, 16, 17]]
```

## Key Idea
Simply find out the minimum element for each row and store it in an array.

We can use a map that maps the column to a set of row number.

Then, we can simply find out the maximum element for each column, and if that's a minimum element in the map, we push it to the output array.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution
- [Python](./solution.oy)