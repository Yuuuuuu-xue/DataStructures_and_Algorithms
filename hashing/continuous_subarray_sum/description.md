## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 523

## Problem
Given an integer array nums and an integer k, return `true` if `nums` has a good subarray or `false` otherwise.

A good subarray is a subarray where:
- its length is at least two, and
- the sum of elements of the subarray is a multiple of `k`

Note that:
- A subarray is a contiguous part of the array
- An integer `x` is a multiple of `k` if there exists an integer `n` such that `x = n * k`. 0 is always a multiple of `k`.

## Example
```
Input: nums = [23, 2, 4, 6, 7], k = 6
Output: true
Explanation: [2, 4] is a continuous subarray of size 2 whose elements sum up to 6.
```

## Key Idea
We will use `curr_sum` variable to accumulate the sum and calculate the `remainder`. If this `remainder` is something we see before at index `j`, then it means `sum(nums[:i]) % k = remainder` and `sum(nums[:j]) % k = remainder`. Then `sum(nums[i:j]) % k = 0`. Thus, we can a map to map `remainder` to index `j` and return `true` if `j - i > 1` then it means it has at least 2 elements.

To cover the case where the sum of entire array % k == 0, we can set `m[0] = -1`, then if array length is `1`, it won't work because `i - m[0] = 0 - (-1) = 1` and not `> 1`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(k)

## Solution
- [Python](./solution.py)
