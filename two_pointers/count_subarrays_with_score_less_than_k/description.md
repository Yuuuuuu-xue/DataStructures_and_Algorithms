# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 2302

## Problem
The score of an array is defined as the product of its sum and its length.
- For example, the score of `[1, 2, 3, 4, 5]` is `(1 + 2 + 3 + 4 + 5) * 5 = 75`.

Given a positive integer array `nums` and an integer `k`, return the number of non-empty subarray of `nums` whose score is strictly less than `k`.

A subarray is a contiguous sequence of elements within an array.

## Example:
```
Input: nums = [2, 1, 4, 3, 5], k = 10
Output: 6
Explanation:
The 6 subarrays having scores less than 10 are:
- [2] with score 2 * 1 = 2
- [1] with score 1 * 1 = 1
- [4] with score 4 * 1 = 4
- [3] with score 3 * 1 = 3
- [5] with score 5 * 1 = 5
- [2, 1] with score (2 + 1) * 2 = 6
```

## Key Idea
We can solve this with sliding window where the score of the window should be strictly less than `k`.

We can use `curr_sum` to represent the sum of the window. Then we can simply use the diff of two pointers to get the window size and thus calculate the score.

For each iteration, we include `j`th element in the window and keep updating `i`th element until the score of the window is less than `k`.

Now, to add number of subarrays, we can add `j - i + 1` to the output.

For example, if `i = 0` and `j = 0` works. Then, we add `nums[0]` to the output.

Now if `i = 0` and `j = 1` works. Then, we add `j - i + 1 = 2` works because it includes `nums[1]` and `[nums[0], nums[1]]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)