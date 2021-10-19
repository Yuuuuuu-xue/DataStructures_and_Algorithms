## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## Description
Given the *root* of a binary tree, return the level order traversal of its nodes'values from left to right, level by level.

## Example
```
Input:
        3
       / \
      9   20
         /  \
        15   7

Output: [[3], [9, 20], [15, 7]]
```

## Key Idea
We will use BFS to solve this problem. For each iteration, we will pop all the items of current queue length to achieve the level by level constraint.

## Solution
- [Python Solution](binary_tree_level_order_traversal.py)