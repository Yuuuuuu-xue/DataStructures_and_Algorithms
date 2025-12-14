## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium

## Problem
You are given an array of `intervals`, where `intervals[i] = [start_i, end_i]` and each `start_i` is unique.

The right interval for an interval `i` is an interval `j` such that `start_j >= end_i` and `start_j` is minimize. Note that `i` may equal `j`.

Return an array of right interval indices for each interval `i`. If no right interval exists for interval `i`, then put `-1` at index `i`.

## Example
```
Input: intervals = [[1, 2]]
Output: [-1]

Input: intervals = [[3, 4], [2, 3], [1, 2]]
Output: [-1, 0, 1]
```

## Key Idea
This is kind of sorting. If we sort the intervals by end time, then we start with the end time earliest possible, we do not know when is the next element with larger start time than current end time. It may takes O(n) to look such interval and takes O(n^2) overall.

However, if we sort the start interval with i. Then, we can perform a binary search to find the largest element (start time) >= current element end time.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
