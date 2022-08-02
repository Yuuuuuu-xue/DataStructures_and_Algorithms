## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 378

## Description
Given an `n x n` matrix where each of the rows and columns is sorted in ascending order, return the `kth smallest element in the matrix`. Note that it is the kth smallest element in the sorted order, not the kth distinct element. You must find a solution with a memory complexity better than O(n^2).

## Example
```
Input: k = 8 and matrix = 
  [[1, 5, 9],
   [10, 11, 13],
   [12, 13, 15]]
Output: 13

Input: matrix = [[-5]] and k = 1
Output: -5
```

## Basic Idea
We will use min heap to solve this question. First of all, we know that all the columns are sorted, so we can push each row into the heap. Then for each iteration, we pop out an element with min value and move it's index by 1 (to the next column). At the end, we have the target value

## Solution
- [C++](./solution.cpp)