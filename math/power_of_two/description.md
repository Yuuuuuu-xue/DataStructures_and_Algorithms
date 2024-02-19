# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 231

## Problem
Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two, if there exists an integer `x` such that `n == 2^x`.

## Example:
```
Input: n = 1
Output: true
Explanation: 2^0 = 1

Input: n = 16
Output: true
Explanation: 2^4 = 16
```

## Key Idea
Simply let `x = log_2(n)`. If `x` is an integer, then we can return `true`.

## Complexity Analysis
- Runtime Complexity: O(1)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
