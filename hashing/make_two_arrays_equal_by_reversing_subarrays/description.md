## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1460

## Problem
You are given two integer arrays of equal length `target` and `arr`. In one step, you can select any non-empty subarray of `arr` and reverse it. You are allowed to make any number of steps.

Return `true` if you can make `arr` equal to `target` or `false` otherwise.

## Example
```
Input: target = [1, 2, 3, 4], arr = [2, 4, 1, 3]
Output: true
```

## Key Idea
Since we can reverse any subarrays any number of times, this means we can simply swap any numbers by reversing the subarrays to achieve it.

This means if two array contain the equal number of elements, then we can return `true` otherwise `false`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)