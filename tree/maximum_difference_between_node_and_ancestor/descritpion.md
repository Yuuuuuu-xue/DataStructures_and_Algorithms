## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1026

## Description
Given the `root` of a binary tree, find the maximum value `v` for which there exist different nodes `a` and `b` where `v = |a.val - b.val|` and `a` is ancesotr of `b`.

A node `a` is an ancestor of `b` if either: any child of `a` is equal to `b` or any child of `a` is an ancestor of `b`.

## Example
```
Input:
    8
   / \
  3   10
 / \    \
1   6    14
   / \   /
  4   7 13
Output: 7
Explanation: The node from `8` to `1` with maximum absolute value `7`.
```

## Key Idea
Simply traverse the tree and keep track the `currMin` and `currMax` along the path, then we can simply update the final output to find out the maximum value.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)