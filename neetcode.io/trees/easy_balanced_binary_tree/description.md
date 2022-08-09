## LeetCode Problem
Easy 110

## Description
Given a binary tree, determine if it is height-balanced. For this probvlem, a height-balanced binary tree is defined as: a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

## Example
```
Input:
    3
   / \
  9   20
      / \
     15  7
Output: true

Input:
        1
       / \
      2   2
     / \
    3  3
   / \
  4  4
```

## Key Idea
Simply traverse the tree and return the height of the tree. For empty node, return 0 and for a single node, return 1. Then for any node rooted at `curr`, we get its left subtree height `left` and right subtree height `right`. If abs(right - left) > 1, then the tree is not balanced and we can simply return false.

## Solution
- [C++](solution.cpp)