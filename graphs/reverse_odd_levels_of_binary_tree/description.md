## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 2415

## Problem
Given the `root` of a perfect binary tree, reverse the node values at each odd level of the tree.
- For example, suppose the node values at level 3 are `[2, 1, 3, 4, 7, 11, 29, 18]`, then it should become `[18, 29, 11, 7, 4, 3, 1, 2]`

Return the root of the reversed tree.

A binary tree is perfect if all parent nodes have two children and all leaves are on the same level.

The level of a node is the number of edges along the path between it and the root node.

## Example
```
Input:
    2
   / \
  3   5
 / \ / \
8 13 21 34
Output:
    2
   / \
  5   3
 / \ / \ 
8 13 21 34
```

## Key Idea
We can simply traverse the tree level by level. When it's even tree, we save the current level nodes into an array. If it's an odd level, we simply swap the node at current level with prev level.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
