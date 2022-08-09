## LeetCode Problem
Easy 226

## Description
Given the `root` of a binary tree, invert the tree, and return its root.

## Example
```
Input:
    4
   /  \
  2    7
 / \  / \
1   3 6  9

Output:
    4
   /  \
  7    2
 / \  / \
9  6 3   1
```

## Key Idea
Simply traverse the tree, if `curr` node is a leaf or null, then we do nothing. Otherwise, simply swap it's left and right children and recursively do the same thing.

## Solution
- [C++](solution.cpp)