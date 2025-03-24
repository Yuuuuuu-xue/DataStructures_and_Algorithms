# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3169

## Problem
You are given a positive integer `days` representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array `meetings` of size `n` where, `meetings[i] = [start_i, end_i]` represents the starting and ending days of meeting `i` (inclusive).

Return the count of days when the employee is available for work but no meetings are scheduled.

Note: the meetings may overlap.

## Example
```
Input: days = 10, meetings = [[5, 7], [1, 3], [9, 10]]
Output: 2
Explanation: 
There is no meeting scheduled on the 4th and 8th days.
```

## Key Idea
We can simply sort the meetings by start time. Then merge the meeting with overlap and find out the number of non meeting days by taking a diff between two meetings.


## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)