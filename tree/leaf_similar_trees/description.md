## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 872

## Description
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.

```
      3
     / \
    5   1
   / \ / \
  6  2 9  8
    / \
   7   4
```

For example, in the given tree above, the leaf value sequence is `(6, 7, 4, 9, 8)`.

Two binary trees are considered leaf-similar if there leaf value sequence is the same.

Return `true` if and only if two given trees with head nodes `root1` and `root2` are leaf-similar.

## Example
```
Input:
      3                 3
     / \               / \
    5   1             5   1
   / \ / \           / \ / \
  6  2 9  8         6  7 4  2
    / \                    / \
   7   4                  9   8
```

## Key Idea
Simply iterate over the tree and collect all the leaf nodes as the array. Then simply loop over the second try and compare

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)