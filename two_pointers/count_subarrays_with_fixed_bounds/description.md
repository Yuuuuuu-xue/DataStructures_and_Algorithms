# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 2444

## Problem
You are given an integer array `nums` and two integers `minK` and `maxK`.

A fixed-bound subarray of `nums` is a subarray that satisfies the following conditions:
- The minimum value in the subarray is equal to `minK`
- The maximum value in the subarray is equal to `maxK`

Return the number of fixed-bound subarrays.

A subarray is a contiguous part of an array.

## Example:
```
Input: nums = [1, 3, 5, 2, 7, 5]
Output: 2
Explanation: The fixed-bound subarrays are [1, 3, 5] and [1, 3, 5, 2]
```

## Key Idea
Since it asks for a contiguous array, it provides a hint to use a two pointer (sliding window) to solve this problem. We will keep the window to have the minimum value equals to `minK` and maximum value equals to `maxK`. Then, let `minI` be the last index of the element with value `minK` and `maxI` be the last index of the element with value `maxK` and `x` be the index such that it has a smaller value than `minK` or larger value than `maxK`.

Then we have `[..., x, ..., minI, ..., maxI, ...,]`, assuming `minI < maxI` and the other direction is similarly. Then any subarrays contains index from `x + 1` to `minI` is a valid window, so from index `x + 1` to `minI` (inclusive).

Thus, we loop over each element, keep track the index `minI`, `maxI`, and `x`, and num subarrays when we see `x` while `minI` and `maxI` are defined, is equal to `max(0, min(minI, maxI) - x)`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)