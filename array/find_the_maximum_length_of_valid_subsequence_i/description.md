# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3201

## Problem
You are given an integer array `nums`. A subsequence `sub` of `nums` with length `x` is called valid if it satisfies:
- `(sub[0] + sub[1]) % 2 == (sub[1] + sub[2]) % 2 == ... == (sub[x - 2] + sub[x - 1]) % 2`

Return the length of the longest valid subsequence of `nums`.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

## Example
```
Input: nums = [1, 2, 3, 4]
Output: 4
Explanation: The longest valid subsequence is [1, 2, 3, 4]

Input: nums = [1, 2, 1, 1, 2, 1, 2]
Output: 6
Explanation: The longest valid subsequence is [1, 2, 1, 2, 1, 2]
```

## Key Idea
Note the longest valid subsequence can be one out of 4 cases:
1. All odd
2. All even
3. Odd - even - odd - even ...
4. Even - odd - even - odd ...

We can simply iterate over and count number of odd/even and alternate sequence.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)