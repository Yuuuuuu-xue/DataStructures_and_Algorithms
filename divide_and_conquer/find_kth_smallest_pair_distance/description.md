## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 719

## Problem
The distance of a pair of integers `a` and `b` is defined as the absolute difference between `a` and `b`.

Given an integer array `nums` and an integer `k`, return the `kth` smallest distance among all the pairs `nums[i]` and `nums[j]` where `0 <= i < j < nums.length`

## Example
```
Input: nums = [1, 3, 1], k = 1
Output: 0
Explanation: Here are all the pairs:
(1, 3) -> 2
(1, 1) -> 0
(3, 1) -> 2
Then the 1st smallest distance pair is (1, 1) and its distance is 0.
```

## Key Idea
Given a sorted array, suppose we want to know if there is at least `k` pairs such that is less than or equal to `x`. We can simply iterate from `right` from `1` to `n - 1`, then starting from `left` and keep increment `left` until `arr[right] - arr[left] <= x`, then we know numbers from left to right are all the possible pairs which has a number of `right - left`.

Now, we have this helper function that solves this sub-problem. We can simply use a binary search to solve this problem. Starting at left = 0 and right = nums[-1] - nums[0], we want to use binary search to check if `mid = (left + right) / 2` is the right solution.


## Complexity Analysis
- Runtime Complexity: O(n lg(max(nums)))
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
