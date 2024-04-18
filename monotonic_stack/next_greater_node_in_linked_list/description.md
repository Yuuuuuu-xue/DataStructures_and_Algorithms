## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1019

## Problem
You are given the `head` of a linked list with `n` nodes.

For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

Return an integer array `answer` where `answer[i]` is the value of the next greater node of the `ith` node (1-indexed). If the `ith` node does not have a next greater node, set `answer[i] = 0`.

## Example
```
Input: 2 -> 1 -> 5
Output: [5, 5, 0]

Input: 2 -> 7 -> 4 -> 3 -> 5
Output: [7, 0, 5, 5, 0]
```

## Key Idea
Since for each element, we want to find the next greater node, it provides a hint to use a monotonic stack to solve this problem

We can use a `monoStack` to be a monotonic decreasing order. We will loop over the elements from back to front, for each element `x`, we pop all elements `<= x`. So the `monoStack` is in a decreasing order.

Since a linked list, to loop over the list and update `mono_stack`, we can simply use a recursion to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
