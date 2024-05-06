## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2487

## Problem
You are given the `head` of a linked list.

Remove every node which has a node with a greater value anywhere to the right side of it.

Return the `head` of the modified linked list.

## Example
```
Input: head = 5 -> 2 -> 13 -> 3 -> 8
Output: 13 -> 8
```

## Key Idea
Since we want to pop all the smaller elements when there is a larger element at a larger index. We can use a monotonic stack where the stack is in an decreasing order. For each element `x`, we can pop all the smaller elements from the monotonic stack and thus monotonic stack is in an decreasing order.

To pop the element from linked list, we can simply connect all the elements in the monotonic stack and return it.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
