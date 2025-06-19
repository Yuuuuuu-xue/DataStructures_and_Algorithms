## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2294

## Problem
You are given an integer array `nums` and an integer `k`. You may partition `nums` into one or more subsequences such that each element in `nums` appear in exactly one of the subsequences.

Return the minimum number of subsequences needed such that the difference between the maximum and minimum values in each subsequence is at most `k`.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

## Example
```
Input: nums = [3, 6, 1, 2, 5], k = 2
Output: 2
Explanation: we can partition into two subarrays
- [3, 1, 2] amd [6, 5]
- 3 - 1 = 2
- 6 - 5 = 1
```

## Key Idea
A simple greedy strategy: we group smallest element together until max - min > k, then we put the new element into a new group and start the process again.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
