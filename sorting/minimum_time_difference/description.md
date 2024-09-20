## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 539

## Problem
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

## Example
```
Input: timePoints = ["23:59", "00:00"]
Output: 1
```

## Key Idea
Simply convert the time to minutes, then sort it and find the minimum difference. Note, the min difference could also be between minimum time and maximum time as there is a wrap around for 24 hours. Thus, at the end, let `minDiff = min(minDiff, 24 hours in min - max time + min time)`

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)

