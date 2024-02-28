## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 513

## Description
Given the `root` of a bianry tree, return the leftmost value in the last row of the tree.

## Example
```
Input:
  2
 / \
1   3
Output: 1

Input:
    1
   / \
  2   3
 /   / \
4   5   6
   /
  7
Output: 7
```

## Key Idea
Simply traverse the tree with BFS level by level

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(m) where m is the maximum number of nodes at some level

## Solution
- [C++](solution.cpp)