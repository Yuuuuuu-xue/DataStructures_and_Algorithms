## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2181

## Problem
You are given the `head` of a linked list, which contains a series of integers separated by `0`'s. The beginning and end of the linked list will have `Node.val == 0`.

For every two consecutive `0`'s, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any `0`'s.

Return the `head` of the modified linked list.

## Example
Input: head = [0, 3, 1, 0, 4, 5, 2, 0]
Output: [4, 11]
Explanation:
- Merge 3 and 1 and it become 4
- Merge 4, 5, and 2 and it become 11

## Key Idea
Simply skip the first node, when we see a node with value `0`, we create a new node and append to the returned linked list with the accumulate sum and set it back to 0. When we see a node with non-zero, we accumulate the sum.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n), in the worst case, we have 0 -> non zero -> 0 -> non zero -> 0 -> ... -> 0 

## Solution
- [Python](./solution.py)
