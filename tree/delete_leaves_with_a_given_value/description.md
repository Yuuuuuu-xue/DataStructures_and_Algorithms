## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1325

## Problem
Given a binary tree `root` and an integer `target`, delete all the leaf nodes with value `target`.

Note that once you delete a leaf node with value `target`, if its parent node becomes a leaf node and has the value `target`, it should also be deleted (you need to continue doing that until you cannot).

## Example
```
Input: root = 
    1
   / \
  2   3
 /   / \
2   2   4
Output:
  1
   \ 
    3
     \
      4
```

## Key Idea
Simply use recursion. If reach to a leaf node, return `node` if it has different value than `target`. If the same `target`, then return `null`. Then in the parent node, we just set `left` and `right` to the recursive returned value. Recursively repeat it.

## Complexity Analaysis
- Runtime Complexity: O(h)
- Space Complexity: O(h)

## Solution
- [Python](./solution.py)