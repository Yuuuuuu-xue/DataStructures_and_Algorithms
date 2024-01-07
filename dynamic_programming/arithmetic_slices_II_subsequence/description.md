## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 446

## Problem
Given an integer array `nums`, return the number of all the arithmetic subsequences of `nums`.

A sequence of number is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.
- For example, `[1, 3, 5, 7, 9]`, `[7, 7, 7, 7]` and `[3, -1, -5, -9]` are arithmetic subsequences.
- For example, `[1, 1, 2, 5, 7]` is not an arithmetic sequence

A subsequence of an array is a sequence that can be formed by removing some elements (possibly none) of the array.
For example `[2, 5, 10]` is a subsequence of `[1, 2, 1, 2, 4, 1, 5, 10]`.

The test cases are generated so that the answer fits in 32-bit integer.

## Example:
```
Input: nums = [2, 4, 6, 8, 10]
Output: 7
Explanation: all arithmetic subsequence slices are:
- [2, 4, 6]
- [4, 6, 8]
- [6, 8, 10]
- [2, 4, 6, 8]
- [4, 6, 8, 10]
- [2, 4, 6, 8, 10]
- [2, 6, 10]
```

## General Idea:
We will solve this problem via dynamic programming. Let `dp[x][y]` be the number of arithmetic subsequences ending at index `x` with the common difference `y`.

Then we can simpyl loop over index `i` from `0` to `n - 1` and index `j` from `0` to `i - 1`, then `dp[x][y] = dp[i][nums[i] - nums[j]]`.

We can increment `dp[x][y]` by 1 and if `dp[j][nums[i] - nums[j]] > 0`, this means, we may have two or more subsequence elements with the same difference. And thus, we can increment the final output by `dp[j][nunms[i] - nums[j]]` and increment `dp[x][y]` by `dp[j][nums[i] - nums[j]]`

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution
- [C++](./solution.cpp)
