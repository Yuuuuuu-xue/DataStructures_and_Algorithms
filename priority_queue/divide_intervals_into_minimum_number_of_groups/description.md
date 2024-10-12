## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2406

## Problem
You are given a 2D integer array `intervals` where `intervals[i] = [left_i, right_i]` represents the inclusive interval `[left_i, right_i]`.

You have to divide the intervals into one or more groups such that each interval is in exactly one group, and no two intervals that are in the same group intersect each other.

Return the minimum number of groups you need to make.

Two intervals intersect if there is at least one common number between them. For example, the intervals `[1, 5]` and `[5, 8]` intersect.

## Example
```
Input: intervals = [[5, 10], [6, 8], [1, 5], [2, 3], [1, 10]]
Output: 3
Explanation: we can divide the intervals into the following groups:
- Group 1: [1, 5], [6, 8]
- Group 2: [2, 3], [5, 10]
- Group 3: [1, 10]
```

## Key Idea
First of all we need to start with the earliest interval first and thus we need to sort the intervals. Then we need to keep track all the groups end time.

For each interval, we will select the group with minimum interval. If intersect, then we use a new group otherwise update the group with new end time.

To keep track of groups and get the group with minimum end time, we can simply use a min heap.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)