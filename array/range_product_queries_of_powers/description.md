# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2438

## Problem
Given a positive integer `n`, there exists a 0-indexed array called `powers`, composed of the minimum number of powers of `2` that sum to `n`. The array is sorted in non-decreasing order, and there is only one way to form the array.

You are also given a 0-indexed 2D integer array `queries`, where `queries[i] = [left_i, right_i]`. Each `queries[i]` represents a query where you have to find the product of all `powers[j]` with `left_i <= j <= right_i`.

Return an array `answers`, equal in length of `queries`, where `answers[i]` is the answer to the `ith` query. Since the answer to the `ith` query may be too large, each `answers[i]` should be returned modulo `10**9 + 7`.

## Examples:
```
Input: n = 15, queries = [[0, 1], [2, 2], [0, 3]]
Output: [2, 4, 64]
Explanation: For n = 15, powers = [1, 2, 4, 8]. It can be shown that powers cannot be a smaller size.
- 1st query: powers[0] * powers[1] = 1 * 2 = 2
- 2nd query: powers[2] = 4
- 3rd query: powers[0] * powers[1] * powers[2] * powers[3] = 1 * 2 * 4 * 8 = 64
```

## Key Idea
We can simply convert `n` to binary number then find out the powers array easily. Then we can compute a prefix product array so that given queries left and right. We can simply find out the product by `prefix_product[right] / prefix_product[max(left - 1, 0)]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
