# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 689

## Problem
Given an integer array `nums` and an integer `k`, find three non-overlapping subarrays of length `k` with maximum sum and return them.

Return the result as a list of indices representing the starting position of each interval (0-indexed). If there are multiple answers, return the lexicographically smallest one.

## Example:
```
Input: nums = [1, 2, 1, 2, 6, 7, 5, 1], k = 2
Output: [0, 3, 5]
Explanation: the subarrays [1, 2], [2, 6] and [7, 5] correspond to the starting indicies [0, 3, 5].

We could also taken [2, 1] but an answer [1, 3, 5] would be lexicographically larger.
```

## Key Idea
First of all, we need to compute the sum of subarrays of length `k`. To achieve this, we can simply use a sliding window of length `k` to solve this problem and store the result in an array. The `sum_arr[i]` represents the sum of subarray of length `k` starting at index `i`.

Then, we need to find 3 non-overlapping subarrays of length `k` with maximum sum and return them.

To achieve this, note suppose we already know the maximum we can get from the left of the array and maximum we can get from the right of the array, then we can simply compare it with current index.

Let `max_left[i]` represents the maximum sum we can get with index `<= i` and `max_right[i]` represents the maximum sum we can get with index `>= i`.

Then we loop over the index `i` from `k` to `n - k` and calculate the sum at index `max_left[i - k]`, `i`, and `max_right[i + k]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)