# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 56

## Problem
Given an array of ```intervals``` where ```intervals[i] = [start_i, end_i]```, merge all overlapping intervals and returns an array of the non-overlapping intervals that cover all the intervals in the input.

## Example
```
Input: intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]
Output: [[1, 6], [8, 10], [15, 18]]
Explanation: Since the intervals [1, 3] and [2, 6] overlaps, merge them into [1, 6].

Input: intervals = [[1, 4], [4, 5]]
Output: [[1, 5]]
Explanation: Intervals [1, 4] and [4, 5] are considered overlapping.
```

## Key Idea
We will use two pointer technique to solve this problem. First of all, sort the array by its first element. Let i = 0 and j = i. Keep increment j until intervals[j][1] < intervals[j + 1][0]. Then we can merge the intervals[i] to intervals[j]. After it, set i = j + 1 and repeat the process again. In addition, we need to keep track of the max element of the merged elements.
For example, to merge [1, 3] and [1, 2]. We should merge it into [1, 3] not [1, 2].

## Solution
- [Java Solution](merge_intervals.java)