## LeetCode Problem
Medium 55 

## Description
You are given an integer array `nums`. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return `true` if you can reach the last index, or `false` otherwise.

## Example
```
Input: nums = [2, 3, 1, 1, 4]
Output: true
Explanation: Jump 1 step from index 0 to index 1, then 3 steps to the last index.

Input: nums = [3, 2, 1, 0, 4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
```

## Basic Idea
Let `m` be the maximum possible position we can reach. If `i > m`, then we know that we cannot reach to `i` from `0, ..., i - 1`. Thus, we can return `false` immediately. Otherwise, we can update `m` with one possible value which is `i + m`.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)