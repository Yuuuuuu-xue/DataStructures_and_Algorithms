## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 264

## Problem
An ugly number is a positive integer whose prime factors are limited to `2`, `3`, and `5`.

Given an integer `n`, return the `nth` ugly number.

## Example
```
Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.
```

## Key Idea
Note, if given an ugly number `x`, then 2 * `x`, 3 * `x`, and 5 * `x` are all ugly numbers. Thus, we can simply use a heap to keep track of current ugly numbers and every time, we pop the minimum from the heap and push 2 * x, 3 * x, and 5 * x to the heap if we haven't see it before. Repeat the process until we find the `n`th ugly number.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)