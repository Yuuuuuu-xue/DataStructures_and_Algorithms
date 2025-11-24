## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an array of `intervals` where `intervals[i] = [start_i, end_i]`, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

## Example
```
Input: intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
Output: [[1, 6], [8, 10], [15, 18]]
```

## Key Idea
We sort the intervals from smallest to largest, then keep moving `i` until we cannot merge.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python Solution](merge_sort.py)
