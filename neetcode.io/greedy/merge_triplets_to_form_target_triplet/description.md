## LeetCode Problem
Medium 1899

## Description
A triplet is an array of three integers. You are given a 2D integer array `triplets`, where `triplets[i] = [a_i, b_i, c_i]` describes the `ith` triplet. You are also given an integer array `target = [x, y, z]` that describes the triplet you want to obtain.

To obtain `target`, you may apply the following operation on `triplets` any number of times (possibly zero):
- Choose two indices (0-indexed) `i` and `j` (`i != j`) and update `triplets[j]` to become `[max(a_i, a_j), max(b_i, b_j), max(c_i, c_j)]`. For example, if `triplets[i] = [2, 5, 3], triplets[j] = [1, 7, 5]`, `triplets[i]` will be updated to `[max(2, 1), max(5, 7), max(3, 5)] = [2, 7, 5]`

Return `true` if it is possible to obtain the `target` triplet `[x, y, z]` as an element of `triplets` or `false` otherwise.

## Example
```
Input: triplets = [[2, 5, 3], [1, 8, 4], [1, 7, 5]], target = [2, 7, 5]
Output: true
Explanation: Perform the following operations:
- Choose the first and last triplets [2, 5, 3] and [1, 7, 5], update [1, 7, 5] to [max(2, 1), max(5, 7), max(3, 5)] = [2, 7, 5]
- We obtain the target

Input: triplets = [[3, 4, 5], [4, 5, 6]], target = [3, 2, 5]
Output: false
```

## Basic Idea
Let `a` be a list of indices such that `a_i = x`, similarly, we have `b` and `c` be a list of indices such that `b_i = y` and `c_i = z`.

Thus, if we `len(a) <= 1 or len(b) <= 1 or len(c) <= 1`, we return `false` since `i != j`. There is an edge case where `triplets` already contain `target` that we can return `true` immediately.

Then we loop over `a`, then we need to check if the corresponding `b_i <= y` and `c_i <= z`. Otherwise, we cannot use this index since we will get a value `> y or > z`.

We may not need to store `a`, `b`, `c`, when `a_i = x`, we can just update a boolean variable if `b_i <= y` and `c_i <= z`.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)