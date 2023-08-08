## LeetCode Problem
Medium 215

## Description
Given an integer array `nums` and an integer `k`, return the `kth` largest element in the array.

Note taht is the `kth` largest element in the sorted order, not the `kth` distinct element.

Can you solve it without sorting?


## Example
```
Input: nums = [3, 2, 1, 5, 6, 4], k = 2
Output: 5

Input: nums = [3, 2, 3, 1, 2, 4, 5, 5, 6], k = 4
Output: 4
```

## Basic Idea
We can use a priority queue with a min heap implementation and size at most k. Then the top of element is the `kth` largest element.

## Complexity Analysis
- Runtime Complexity: O(n * lg k)
- Space Complexity: O(k)

## Solution
- [C++](./solution.cpp)