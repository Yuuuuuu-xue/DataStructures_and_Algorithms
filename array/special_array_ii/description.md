# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3152

## Problem
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integer `nums` and a 2D integer matrix `queries`, where for `queries[i] = [from_i, to_i]` your task is to check that subarray `nums[from_i ... to_i]` is special or not.

Return an array of boolean `answer` such that `answer[i]` is `true` if `nums[from_i ... to_i]` is special.

## Example
```
Input: nums = [3, 4, 1, 2, 6], queries = [[0, 4]]
Output: [false]
Explanation: The subarray is [3, 4, 1, 2, 6], 2 and 6 are both even.
```

## Key Idea
We can use a prefix sum to solve this problem.

Let `prefix` be an array that represents the number of consecutive elements with the same parity.

Then, for each element at index `i`, `prefix[i] = prefix[i - 1]`, and if the element has the same parity of the previous element, we can increment `prefix[i]` by 1.

Then for each query, we can simply compare `prefix[to] - prefix[from]` and return `true` or `false`.

## Complexity
- Time Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)