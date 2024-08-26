## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 590

## Problem
Given the `root` of an n-ary tree, return the postorder traversal of its nodes' values.

Nary-tree input serialization is represented in their level order traversal. Each group of children is separated by the null value.

## Example
```
Input: root
        1
      / | \
     3  2  4
    / \
   5   6

Output: [5, 6, 3, 2, 4, 1]
```

## Key Idea
Simply traverse the tree in the post order traversal: left - right - root.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)