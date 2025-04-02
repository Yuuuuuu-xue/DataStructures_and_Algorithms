# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2873

## Problem
You are given a 0-indexed integer array `nums`.

Return the maximum value over all triplets of indices `(i, j, k)` such that `i < j < k`. If all such triplets have a negative value, return `0`.

The value of a triplet of indices `(i, j, k)` is equal to `(nums[i] - nums[j]) * nums[k]`.

## Example
```
Input: nums = [12, 6, 1, 2, 7]
Output: 77
Explanation: The value of the triplet (0, 2, 4) is (nums[0] - nums[2]) * nums[4]
```

## Key Idea
First of all, note, for i and j, i must be the maximum value among the indices `[0, j)`.

If we loop over the number `k`, we can simply track the max of `i` which will be `nums[k]`. The max of `nums[i] - nums[j]`, then multiply if by `nums[k]`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)