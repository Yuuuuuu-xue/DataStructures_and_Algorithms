## Linked List
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given the `head` of a linked list with `n` nodes.

For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

Return an integer array `answer` where `answer[i]` is the value of the next greater node of the `ith` node (1-indexed). If the `ith` node does nto have a next greater node, set answer[i] = 0.

## Example:
```
Input: 2 -> 1 -> 5
Output: [5, 5, 0]
```

## Key Idea
We can simply use a recursive solution since we need to build it from right to left. We iterate over the list and then recursively build the array.

We also need to use a monotonic stack to track a strictly decreasing stack. So if monotonic_stack[-1] doesn't work, we can pop it until reach to an element (from the right side of curr node) that has a strictly greater value.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)