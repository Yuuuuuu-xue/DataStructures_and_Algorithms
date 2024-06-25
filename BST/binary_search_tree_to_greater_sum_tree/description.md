## Binary Search Tree
Click \[here\](../notes.md) to go back to the notes page.

## Problem
Given the `root` of a binary search tree (BST), convert it to a greater tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a binary search tree is a tree that satisfies these constraints:
- The left subtree of a node contains only nodes with keys less than the node's key
- The right subtree of a node contains only nodes with keys greater than the node's key
- Both the left and right subtrees must also be binary search trees

## Example
```
Input: root =
      4
     / \
    1   6
   / \  / \
  0  2 5   7
      \     \
       3     8
Output:
       30
      / \
    36  21
   / \  / \
 36 35 26  16
      \     \
      33     8
```

## Key Idea
We can simply traverse it in `right`, `root`, then `left`. For each node, we return the accumulate sum and for each node, we update the current node's value plus the right subtree return value.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)