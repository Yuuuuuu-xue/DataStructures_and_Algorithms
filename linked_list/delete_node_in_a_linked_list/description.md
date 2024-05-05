## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 237

## Problem
There is a singly-linked list `head` and we want to delete a `node` in it.

You are given the node to be deleted `node`. You will not be given access to the first node of `head`.

All the values of the linked list are unique, and it is guaranteed that the given node `node` is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:
- The value of the given node should not exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All the values before `node` should be in the same order.
- All the values after `node` should be in the same order.

Custom testing:
- For the input, you should provide the entire linked list `head` and the node to be given `node`. `node` should not be the last node of the list and should be an actual node in the list.
- We will build the linked list and pass the node to your function.
- The output will be the entire list after calling your function.

## Example
```
Input: 4 -> 5 -> 1 -> 9, given node 5
Output: 4 -> 1 -> 9
```

## Key Idea
Since we are only given the delete node but we do not have the head of the linked list. Then we can simply update the current node as the next node and remove the next node from linked list.

## Complexity Analysis
- Runtime Complexity: O(1)
- Space Complexity: O(1)

## Solution
- [Python Solution](./solution.py)