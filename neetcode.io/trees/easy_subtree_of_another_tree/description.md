## LeetCode Problem
Easy 572

## Description
Given the roots of two binary trees `root` and `subRoot`, return `true` if there is a subtree of `root` with the same structure and node values of `subRoot` and `false` otherwise.

A subtree of a binary tree `tree` is a tree that consists of a node in `tree` and all of this node's descendants. The tree `tree` could also be considered as a subtree of itself.

## Example
```
Input:
root:
    3
   / \
  4   5
 / \
1   2
subRoot:
    4
   / \
  1   2
Output: true

Input:
root:
    3
   / \
  4   5
 / \
1   2
   /
  0
subRoot:
  4
 / \
1   2
```

## Key Idea
Simply traverse the tree and let `curr` be the root of any subtree. We check if `curr` is the subtree or not. We can do so by checking if
- `subTree == nullptr and currTree == nullptr`, or
- `curr->val` is same as `subTree->val` and check the left subtree and right subtree.

If false, then we check the left subtree and right subtree as well.

## Solution
- [C++](solution.cpp)