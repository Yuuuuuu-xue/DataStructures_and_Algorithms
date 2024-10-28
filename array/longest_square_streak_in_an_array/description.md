# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2501

## Problem
You are given an integer array `nums`. A subsequence of `nums` is called a square streak if:
- The lenth of the subsequence is at least `2`, and
- after sorting the subsequence, each element (except the first element) is the square of the previous number.

Return the length of the longest square streak in `nums`, or return `-1` if there is no square streak.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

## Example
```
Input: nums = [4, 3, 6, 16, 8, 2]
Output: 3
Explanation: Choose the subsequence [4, 16, 2] as 4 = 2 * 2 and 16 = 4 * 4
```

## Key Idea
Simply convert the array into set then for each number, we loop over its square sequence. Since the square grows exponentially, we don't need to worry about it will have a high number iterations.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
