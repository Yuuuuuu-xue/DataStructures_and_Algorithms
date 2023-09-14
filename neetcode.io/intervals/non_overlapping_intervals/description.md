## LeetCode Problem
Medium 435

## Description
Given an array of intervals `intervals` where `intervals[i] = [start_i, end_i]`, return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

## Example
```
Input: intervals = [[1, 2], [2, 3], [3, 4], [1, 3]]
Output: 1
Explanation: [1, 3] can be removed and the rest of the intervals are non-overlapping

Input: intervals = [[1, 2], [1, 2], [1, 2]]
Output: 2
Explanation: You need to remove two [1, 2] to make the rest of the intervals non-overlapping

Input: intervals = [[1, 2], [2, 3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping
```

## Key Idea
We will solve this problem via Greedy algorithm. Our greedy strategy is that if two intervals are overlapping, we will drop the one with larger end, leaving the interval with smaller end value and thus hopefully it won't overlap with the rest of intervals.

To achieve this, we will sort the input array by `start_i`, then `end_i`. Then let `currEnd` be the current end value, iterate over the interval, if two intervals are overlapping, we update `currEnd` and increment the `minNumIntervals` by 1.

If non overlapping interval, then `currEnd` simply is `end_i`.

## Complexity Analysis
- Time Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)