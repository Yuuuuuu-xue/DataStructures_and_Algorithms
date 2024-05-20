## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1863

## Problem
The XOR total of an array is defined as the bitwise XOR of all its elements,or `0` if the array is empty.
- For example; the XOR total of the array `[2, 5, 6]` is `2 XOR 5 XOR 6 = 1`
Given an array `nums`, return the sum of all XOR totals for every subset of `nums`.

Note: subsets with the same elements should be counted multiple times.

An array `a` is a subset of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`.

## Example
```
Input: nums = [1, 3]
Output: 6
Explanation:
- [1] has XOR total of 1
- [3] has XOR total of 3
- [1, 3] has an XOR total of 1 XOR 3 = 2
- Sum = 1 + 3 + 2 = 6

Input: nums = [5, 1, 6]
Output: 28
Explanation:
- [5] has an XOR total of 5
- [1] has an XOR total of 1
- [6] has an XOR total of 6
- [5, 1] has an XOR total of 5 XOR 1 = 4
- [5, 6] has an XOR total of 5 XOR 6 = 3
- [1, 6] has an XOR total of 1 XOR 6 = 7
- [5, 1, 6] has an XOR total of 5 XOR 1 XOR 6 = 2
- Sum = 5 + 1 + 6 + 4 + 3 + 7 + 2 = 28
```

## Key Idea
Simply iterate i from `n - 1` to `0`, and keep a list of subarrays. For each `i`, we loop over subarrays and push new items `i XOR items[i]`.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution
- [Python](./solution.py)