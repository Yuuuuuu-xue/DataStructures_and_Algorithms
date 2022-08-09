## LeetCode Problem
Easy 104

## Description
Given the `root` of a binary tree, return its maximum depth. A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Example
```
Input:
  3
 / \
9   20
    / \
   15  7
Output: 3
```

## Key Idea
Simply traverse the tree with a counter with initial value of 1 (if root is not null pointer), then update the counter + 1 to its left and right subtree. If null pointer, then update the maximum value.

## Solution
- [C++](solution.cpp)