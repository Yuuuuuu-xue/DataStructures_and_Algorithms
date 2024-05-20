# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1574

## Problem
Given an integer array `arr`, remove a subarray (can be empty) from `arr` such that the remaining elements in `arr` are non-decreasing.

Return the length of the shortest subarray to remove.

A subarray is a contiguous subsequence of the array.

## Example
```
Input: arr = [1, 2, 3, 10, 4, 2, 3, 5]
Output: 3
Explanation: The shortest subarray we can remove is [10, 4, 2] of length 3. The remaining elements after that will be [1, 2, 3, 3, 5] which are sorted. Another correct solution is to remove the subarray [3, 10, 4].

Input: arr = [5, 4, 3, 2, 1]
Output: 4
Explanation: Since the array is strictly decreasing, we can only keep a single element. Therefore we need to remove a subarray of length 4, either [5, 4, 3, 2] or [4, 3, 2, 1].
```

## Key Idea
Note, we can only remove one subarray which must be contiguous. This means
- The left side of the subarray must be sorted in non-decreasing order
- The right side of the subarray must be sorted in non-decreasing order
- The middle side of the subarray can be empty, which is can be deleted.
- The left side + middle side + right side of the array equals to the input array

Let the `right` be the maximum index such that starting from `arr[right:]` is sorted in non-decreasing order.

Then we can simply loop over from `left = 0` to an `x` such that `arr[:x + 1]` is sorted in non-decreasing order.

Then starting at `x`, we will move `right` to the right of the array until we can join two subarrays as one array and sorted in non decreasing order.

Keep track of the maximum length.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)