# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an integer array nums and an integer k, return `true` if `nums` has a good subarray or `false` otherwise.

A good subarray is a subarray where:
- its length is at least two, and
- the sum of the elements of the subarray is a multiple of `k`

## Example:
```
Input: nums = [23, 2, 4, 6, 7], k = 6
Output: true
```

## Key Idea
We can simply loop over the array.

Note, we want to find a subarray `nums[i:j+1]` such that the sum is multiple of k.

Hence,
- `sum(nums[i:j+1]) % k == 0`
- `(sum(nums[0:j+1]) - sum(nums[0:i])) % k == 0`
- `sum(nums[0:j+1]) % k == sum(nums[0:i]) % k`

Hence, if can loop over the array and find the such `i` that we have the same remainder.

Note, the num could also contain 0.

This means we also need to check the sum and hence store i.

0 could be a special case. If array contains subarray [0, 0] then it's always possible. However, if not, it's not always possible. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)