## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium

## Problem
You are given the head of a singly linkd-list. The list can be represented as:
L0 -> L1 -> ... -> L_{n - 1} -> Ln

Reorder the list to be on the following form:
L0 -> Ln -> L1 -> L_{n - 1} -> ...

## Example:
```
Input: 1 -> 2 -> 3 -> 4
Output: 1 -> 4 -> 2 -> 3
```

## Key Idea
We can simply store all nodes in a list and keep the current head as the front. Then we traverse the list with n // 2 times.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
