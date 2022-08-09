## LeetCode Problem
Medium 98

## Description
Given the `root` of a binary tree, determine if it is a valid binary search tree (BFS).
A valid BST is defined as follows:
- The left subtree of a node contains only nodes with keys less than the node's key
- The right subtree of a node contains only nodes with keys greater than the node's key
- Both the left and right subtrees must also be binary search trees.

## Example
```
Input:
  2
 / \
1   3
Output: true

Input:
  5
 / \
1   4
   / \
  3   6
Output: false
```

## Key Idea
If a node is empty or a leaf, then it must be a valid BST. Then we can simply traverse the tree and let `curr` be the root of any subtree. We first check if the left subtree is valid BST and right subtree is valid BST. And let `leftMin` and `leftMax` be the minimum values and maximum values of the left subtree. Similarly, we have `rightMin` and `rightMax` for the right subtree. If `currMin < curr->val < rightMax`, then a valid BST of the subtree rooted at `curr`.

## Solution
- [C++](solution.cpp)