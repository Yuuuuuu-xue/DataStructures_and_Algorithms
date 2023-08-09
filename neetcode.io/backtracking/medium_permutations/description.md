## LeetCode Problem
Medium 46

## Description
Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in any order.

## Example
```
Input: nums = [1, 2, 3]
Output: [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]]

Input: nums = [0, 1]
Output: [[0, 1], [1, 0]]

Input: nums = [1]
Output: [[1]]
```

## Basic Idea
We can solve this problem by using a simple recursion. For each recursion, we will take in the `nums` and index `i`. For each recusrive call, we will loop over `j = i, ..., n - 1` and try to swap `nums[i]` and `nums[j]`, after swap and use that swapped array to perform a new recursive call with `i + 1`. After every iteration, we backtrack the previous step by swapping back the values and continue next iteration. When `i >= n - 1`, we can push `nums` to the output array since for every possible permutation, we can choose to swap with `j = i` = no swap and recursive call with `i + 1` until we reach to the base case.

## Solution
- [C++](./solution.cpp)