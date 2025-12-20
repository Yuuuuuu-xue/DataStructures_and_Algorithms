## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard

## Problem
You are given an array of `k` linked-lists `lists`, each linked-list is sorted in asending order.

Merge all the linked-lists into one sorted linked-list and return it.

## Example
```
Input: lists = [[1, 4, 5], [1, 3, 4], [2, 6]]
Output: [1, 1, 2, 3, 4, 4, 5, 6]
```

## Key Idea
Simply use a heap. However, we need a custom comparator with the heap. We can simply implement the `__repr__(self)` and `__lt__(self, other)`

## Complexity Analysis
- Runtime Complexity: O(n lg k)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)