## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3066

## Problem
You are given a 0-indexed integer array `nums`, and an integer `k`.

In one operation, you will:
- Take the two smallest integers `x` and `y` in `nums`
- Remove `x` and `y` from `nums`
- Add `min(x, y) * 2 + max(x, y)` anywhere in the array

Note that you cnan only apply the decribed operation if `nums` contains at least two elements.

Return the minimum number of operations needed so all elements of the array are greater than or equal to `k`.

## Example
```
Input: nums = [2, 11, 10, 1, 3], k = 10
Output: 2
```

## Key Idea
Use a simple heap.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
