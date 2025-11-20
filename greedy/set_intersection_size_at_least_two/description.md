## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Hard 757

## Problem
You are given a 2D integer array `intervals` where `intervals[i] = [start_i, end_i]` represents all the integers from `start_i` to `end_i` inclusively.

A containing set is an array `nums` where each interval from `intervals` has at least two integers in `nums`.
- For example, if `intervals = [[1, 3], [3, 7], [8, 9]]`, then `[1, 2, 4, 7, 8, 9]` and `[2, 3, 4, 8, 9]` are containing sets.

Return the minimum possible size of a containing set.

## Example
```
Input: intervals = [[1, 3], [3, 7], [8, 9]]
Output: 5
Explanation: let nums = [2, 3, 4, 8, 9]. It can be shown that there cannot be any containing array of size 4.
```

## Key Idea
Note, if we sort the intervals and try to assign the num to largest possible in the intervals.

Then, we can iterate over and try to see if we can use the prev largest two possible nums and if depends if we can use it or not.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)
