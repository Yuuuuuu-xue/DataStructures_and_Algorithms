## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 974

## Problem
Given an integer array `nums` and an integer `k`, return the number of non-empty subarrays that have a sum divisible by `k`.

A subarray is a continuous part of an array.

## Example
```
Input: nums = [4, 5, 0, -2, -3, 1], k = 5
Output: 7
Explanation: There are 7 subarrays with a sum divisible by k = 5:
1. [4, 5, 0, -2, -3, 1]
2. [5]
3. [5, 0]
4. [5, 0, -2, -3]
5. [0]
6. [0, -2, -3]
7. [-2, -3]
```

## Key Idea
Very similar to LeetCode 523. We will `curr_sum` to keep track the accumulate sum. Then, we will use a map that maps `remainder` to number of subarrays with this `remainder`. Then, with current `curr_sum`, we calculate the `remainder`. Then `m[remainder]` represents there is some index `j < i`, such that `sum[nums[:i]]` has a remainder `remainder` and `sum(nums[:j])` has a remainder `remainder` as well. Thus, the sum from `sum(nums[i:j])` will have a `remainder` of `0` thus multiple of `k`. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)