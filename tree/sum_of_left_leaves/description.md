## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 404

## Problem
Given the `root` of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

## Example
```
Input:
    3
   / \
  9  20
     / \
    15  7
```

## Key Idea
Simply use a recursion and pass in an extra parameter: `is_left_node`. If `is_left_node` and current node is a leaf node, then we sum up the solution.

Initially, since the root node is not a left leaf of another node, thus initially `is_left_node` is equal to `False`.

## Solution
- [Python](./solution.py)