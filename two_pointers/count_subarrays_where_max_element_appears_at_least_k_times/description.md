# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2962

## Problem
You are given an integer array `nums` and a positive integer `k`.

Return the number of subarrays where the maximum element of `nums` appears at least `k` times in that subarray.

A subarray is a contiguous sequence of elements within an array.

## Example:
```
Input: nums = [1, 3, 2, 3, 3], k = 2
Output: 6
Explanation: The subarrays that contain the element 3 at least 2 times are:
1. [1, 3, 2, 3]
2. [1, 3, 2, 3, 3]
3. [3, 2, 3]
4. [2, 3, 3]
5. [3, 3]
```

## Key Idea
Since the subarray has to be a contiguous sequence, therefore, it provides a hint to use a two pointer (sliding window) to solve this problem where we keep all the elements within the window to have at least minimum `k`.

We first find the `m = max(nums)`, then simply move the right pointer by one for each iteration. Then for each iteration, update `num_max` if the current element is max. Then, simply move the left pointer while `num_max >= k` and decrement `num_max` if left pointer has the max element and increment `num_subarray` by `right - left`.

For each iteration while `num_max >= k`, let array be `[..., left, ..., right, ...]` and each iteration will increment `left` by 1. For each iteration, note all the elements `[left, ..., right, ...]` can be a subarray and thus, we can increment the output by `n - right` for each iteration until `left` reach to `stop`. So `[left, ..., stop, ..., right, ...]` where `stop` to `right` is the min size of array contains at least `k` of max elements. And for `[left, ..., stop]`, they all have the same number of subarrays i.e. `[i, ..., stop, ..., right, ...]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)