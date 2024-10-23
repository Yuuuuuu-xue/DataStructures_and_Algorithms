## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2641

## Problem
Given the `root` of a binary tree, replace the value of each node in the tree with the sum of all its cousins' values.

Two nodes of a binary tree are cousins if they have the same depth with different parents.

Return the `root` of the modified tree.

Note that the depth of a node is the number of edges in the path from the root node to it.

## Example
```
Input:
    5
   / \
  4   9
 / \   \ 
1  10   7
Output:
    0
   / \
  0   0
 / \   \
7   7   11
```

## Key Idea
Note, for each node, it only has at most one node that shares the same parent since it's a binary tree.

We can simply loop over the node level by level to compute the sum at current level. Then loop over all nodes in current level and get its new value by subtract it and its node that shares the same parent. To efficiently do this, when we push the new node to the queue, we can push -neighbor_value to the queue so when we loop over the node, we can have the neighbor node value in O(1) time.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)