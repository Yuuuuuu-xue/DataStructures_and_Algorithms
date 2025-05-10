## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 2918

## Problem
You are given two arrays `nums1` and `nums2` consisting of positive integers.

You have to replace all the `0`'s in both arrays with strictly positive integers such that the sum of elements of both arrays becomes equal.

Return the minimum equal sum you can obtain, or `-1` if it is impossible.

## Example
```
Input: nums1 = [3, 2, 0, 1, 0], nums2 = [6, 5, 0]
Output: 12
Explanation: [3, 2, 2, 1, 4] and [6, 5, 1]
```

## Key Idea
We can simply set count number of zeroes in each array. Then, replace all `0` with `1` and count the sum.

If the array with smaller value and no 0, then we can return `-1`. Otherwise, we can return the array with larger value which is the minimum value.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [Python](./solution.py)
