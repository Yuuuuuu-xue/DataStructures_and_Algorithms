# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1658

## Problem
You are given an integer array `nums` and an integer `x`. In one operation, you can either remove the leftmost or the rightmost element from the array `nums` and subtract its value from `x`. Note that this modifies the array for future operations.

Return the minimum number of operations to reduce `x` to exactly `0` if it is possinle, otherwise, return `-1`.

## Example
```
Input: nums = [1, 1, 4, 2, 3], x = 5
Output: 2
Explanation: The optimal solution is to remove the last two elements to reduce x to zero

Input: nums = [5, 6, 7, 8, 9], x = 4
Output: -1

Input: nums = [3, 2, 20, 1, 1, 3], x = 10
Output: 5
Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.
```

## Key Idea
We will solve this problem with sliding window. We will maintain the window where the sum within the window is `total - x`. If the window size is exactly `total - x`, the elements that are not inside the window are `0 ... left - 1` and `right + 1 ... n - 1` and the sum of those elements are `x` which is the exactly what we are looking for.

At the end, we can keep track of `right - left` which is the window size, we want to maximize this value which means to minimize the size of `0 ... left - 1` + `right + 1 ... n - 1`. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)