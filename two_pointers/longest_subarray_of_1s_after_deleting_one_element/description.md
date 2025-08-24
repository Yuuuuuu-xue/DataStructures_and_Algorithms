# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1493

## Problem
Given a binary array `nums`, you should delete one element from it.

Return the size of the longest non-empty subarray containing only `1`'s in the resulting array. Return `0` if there is no such subarray.

## Example
```
Input: nums = [1, 1, 0, 1]
Output: 3
Explanation: We can remove element at index 2

Input: nums = [1, 1, 1]
Output: 2
Explanation: We must delete one element.
```

## Key Idea
We can simply use a sliding window to solve this problem where we have left and right and also an index `zero_i` that maps the index `0` in the window. If we see another `0` in the window, we can set `left` to `zero_i + 1`, `zero_i = right`.

If element all are `1`s, we return len - 1.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
