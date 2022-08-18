## LeetCode Question
Medium 253 (Premium)

## Description
Given an array of meeting time intervals `intervals` where `intervals[i] = [start_i, end_i]`. Return the minimum number of conference rooms required.

## Example
```
Input: intervals = [[0, 30], [5, 10], [15, 20]]
Output: 2

Input: intervals = [[7, 10], [2, 4]]
Output: 1
```

## Key Idea
We will first sort the intervals by their start time. Then let `pq` represents the priority queue of the end time. If `pq` is empty, then we push the current interval into `pq`. Otherwise, if the minimum end time of priority queue <= curr interval start time, this means we can use the same conference room, then we extract the min and push the new end time. If > then this means we need a new conference room so push the new end time into `pq`. At the end, the length of priority queue is the number of conference room we need.

## Complexity Analysis
- Time complexity: O(n lg n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)