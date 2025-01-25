## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2948

## Problem
You are given a 0-indexed array of positive integers `nums` and a positive integer `limit`.

In one operation, you can choose any two indices `i` and `j` and swap `nums[i]` and `nums[j]` if `|nums[i] - nums[j] <= limit`.

Return the lexicographically smallest array that can be obtained by performing the operation any number of times.

An array `a` is lexicographically smaller than an array `b` if in the first position where `a` and `b` differ, array `a` has an element that is less than the corresponding element in `b`. For example, the array `[2, 10, 3]` is lexicographically smaller than the array `[10, 2, 3]` because they differ at index `0` and `2 < 10`.

## Example
```
Input: nums = [1, 7, 6, 18, 2, 1]
Output: [1, 6, 7, 18, 1, 2]
```

## Key Idea
We can simply group all the elements that are within the range and then sort them.

To achieve that, we will first sort the input array. Then loop over and find out all elements that are in the same range and push them to a group (i.e. array).

Then for each group, we sort the index and put the sorted element back to the output array where smallest element is put to the smallest index.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
