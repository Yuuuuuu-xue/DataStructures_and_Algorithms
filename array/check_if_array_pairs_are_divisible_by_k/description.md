# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1497

## Problem
Given an array of integers `arr` of even length `n` and an integer `k`.

We want to divide the array into exactly `n / 2` pairs such that the sum of each pair is divisible by `k`.

Return `true` if you can find a way to do that or `false` otherwise.

## Example:
```
Input: arr = [1, 2, 3, 4, 5, 10, 6, 7, 8, 9], k = 5
Output: true
Explanation: Pairs are (1, 9), (2, 8), (3, 7), (4, 6), and (5, 10)
```

## Key Idea
The key idea of this question is that if `x % k = a` and `y % k = b` and `a + b = k`, then `(x + y) % k == 0`.

Thus, we can simply find the remainder of each element in the array by divide by `k` and then figure out if we can sum up all pairs. If not, return `false`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)