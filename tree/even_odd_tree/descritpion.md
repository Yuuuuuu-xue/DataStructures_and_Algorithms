## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1609

## Description
A binary tree is nameed Even-Odd if it meets the following conditions:
- The root of the binary tree is at level index `0`, its children are at level index `1`, their children are at level index `2`, etc.
- For every even-indexed level, all nodes at the level have odd integer values in strictly increasing order (from left to right)
- For eveyr odd-indexed level, all nodes at the level have even integer values in strictly decreasing order (from left to right)

## Example
```
Input:
        1
       / \
      10  4
     /   / \
    3   7   9
   / \ /     \
 12  8  6     2
Output: true
```

## Key Idea
Simply perform a BFS level by level and check each level.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(m) where `m` is the maximum number of node at a level

## Solution
- [C++](solution.cpp)