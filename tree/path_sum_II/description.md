## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 113

## Description
Given the `root` of a binary tree and an integer `targetSum`, return all root-to-leaf paths where the sum of the node values in the path equals `targetSum`. Each path should be returned as a list of the node values, not node references.

A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

## Example
```
Input: targetSum = 22, root =
      5
     / \
    4   8
   /   / \
  11  13  4
 / \     / \
7   2   5   1
Output: [[5, 4, 11, 2], [5, 8, 4, 5]]
```

## Key Idea
Apply a simple DFS with backtrack, when we reach to the leaf node, check the current sum. If current sum is the target sum, then append the current path to the output path.

## Solution
- [C++](solution.cpp)