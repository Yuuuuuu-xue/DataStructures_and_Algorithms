## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 3397

## Problem
You are given an integer array `nums` and an integer `k`.

You are allowed to perform the following operation on each element of the array at most once:
- Add an integer in the range `[-k, k]` to the element.

Return the maximum possible number of distinct elements in `nums` after performing the operations.

## Example
```
Input: nums = [1, 2, 2, 3, 3, 4], k = 2
Output: 6
Explanation: nums changes to [-1, 0, 1, 2, 3, 4] after performing operations on the first four elements.
```

## Key Idea
The greedy strategy is that for each element, we try to assign to a min possible element. For instance, for `nums = [1, 1, 1]` and `k = 3`, then we assign to `nums = [-2, -1, 0]` where first element is the min possible value.

Hence, if we sort the array and we can track the possible min value and max value of given a number, if
- curr number falls into the range of prev element, then we take the possible min value, consider the min value and curr min value
- curr number does not fall into the range, then take the min possible value of curr number

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)
