# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2485

## Problem
Given a positive integer `n`, find the pivot integer `x` such that:
- the sum of all elements between `1` and `x` inclusively equals the sum of all elements betweeen `x` and `n` inclusively.

Return the pivot integer `x`. If no such integer exists, return `-1`. It is guaranteed that there will be at most one pivot index for the given input.

## Example
```
Input: n = 8
Output: 6
Explanation: 6 is the pivot integer since 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21
```

## Key Idea
First of all the sum from `1` to `n` is equal to `n * (n + 1) / 2`. Then simply loop from `i` from `0` to `n`, keep the current prefix sum and `sum_1_n - prefix_sum + curr_num == prefix_sum`, then return it. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)