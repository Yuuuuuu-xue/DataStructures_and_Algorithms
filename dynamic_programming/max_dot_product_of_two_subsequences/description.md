## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1458

## Problem
Given two arrays `nums1` and `nums2`.

Return the maximum dot product between non-empty subsequences of nums1 and nums2 with the same length.

A subsequence of a array is new array which is formed from the original array by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e. `[2, 3, 5]`) is a subsequence of `[1, 2, 3, 4, 5]` while `[1, 5, 3]` is not.

## Example
```
Input: nums1 = [2, 1, -2, 5], nums2 = [3, 0, -6]
Output: 18
Explanation: [2, -2] from nums1 and [3, -6] from nums2, the dot product is 2 * 3 + -2 * -6 = 18

Input: nums1 = [3, -2], nums2 = [2, -6, 7]
Output: 21
Explanation: [3] from nums1 and [7] from nums2, the dot product is 3 * 7 = 21

Input: nums1 = [-1, -1], nums2 = [1, 1]
Output: -1
Explanation: [-1] from nums1 and [1] from nums2, the dot product is -1 * 1 = -1
```

## Key Idea
We will solve this problem via dynamic programming. Let `dp[i][j]` be the maximum dot product between `nums1[:i]` and `nums2[:j]`.

For `i > 0` and `j > 0`, then there is three possible case:
- The maximum product is `nums[i] * nums[j]` + `dp[i - 1][j - 1]`
- The maximum product is `dp[i - 1][j]`
- The maximum product is `dp[i][j - 1]`

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)