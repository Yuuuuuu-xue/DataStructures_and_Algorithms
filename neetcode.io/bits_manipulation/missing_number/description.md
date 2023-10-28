## LeetCode Problem
Easy 268

## Description
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

## Example
```
Input: nums = [3, 0, 1]
Output: 2
Explanation: 2 is the only number missing in the input [3, 0, 1]

Input: nums = [0, 1]
Output: 2
```

## Key Idea
Note `4 XOR 4 XOR 3 XOR 1 XOR 1 = 3` since the same value will cancel. Thus, the key idea is to `XOR` all the numbers from `0` to `n`, then `XOR` all the numbers in the given range. At the end, every number occurs exactly twice and except one.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)