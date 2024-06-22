# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium  1248

## Problem
Given an array of integers `nums` and an integer `k`. A continuous subarray is called nice if there are `k` odd numbers on it.

Return the number of nice sub-arrays.

## Example:
```
Input: nums = [1, 1, 2, 1, 1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1, 1, 2, 1] and [1, 2, 1, 1]
```

## Key Idea
Simply let `left = 0` and `right = 0` be two incides and we increment `right` everytime and keep track of `k` odd numbers. When we see `> k` odd numbers, we move the left pointer until we have exactly `k` odd number. Then the number of subarray for each iteration is `right - left + 1`. This provides us at most `k` odd numbers. Then exactly `k` will be at most `k` - at most `k - 1`. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)