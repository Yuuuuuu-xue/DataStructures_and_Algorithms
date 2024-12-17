## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3264

## Problem
You are given an integer array `nums`, an integer `k`, and an integer `multiplier`.

You need to perform `k` operations on `nums`. In each operation:
- Find the minimum value `x` in `nums`. If there are multiple occurrences of the minimum value, select the one that appears first.
- Replace the selected minimum value `x` with `x * multiplier`.

Return an integer array denoting the final state of `nums` after performing all `k` operations.

## Example
```
Input: nums = [2, 1, 3, 5, 6], k = 5, multiplier = 2
Output: [8, 4, 6, 5, 6]
```

## Key Idea
Simply use a min heap with tuple `(value, index)`.

## Complexity Analysis
- Runtime Complexity: O(n + k lg n)
    - O(n) for building the heap from an array
    - O(k lg n) for k operations where each takes O(lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)