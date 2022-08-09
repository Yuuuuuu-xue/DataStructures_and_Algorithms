## LeetCode Problem
Medium 1448

## Description
Given a binary tree `root`, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X. Return the number of good nodes in the binary tree.

## Example
```
Input:
    3
   / \
  1   4
 /   / \
3   1   5
Output: 4
The nodes are:
- 3 (always)
- 4 (since 3 -> 4)
- 5 (since 3 -> 4 -> 5)
- 3 (since 3 -> 1 -> 3)
```

## Key Idea
A simple traverse and let `curr` be the root of any subtree and `currMax` be the maximum value along the path from `root` to `curr` (not inclusive for `curr`). Then, we check if `curr.val >= currMax`, if so, it is a good node. 

## Solution
- [C++](solution.cpp)