## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 623

## Problem
Given the `root` of a binary tree and two integers `val` and `depth`, add a row of nodes with value `val` at the given depth `depth`.

Note that the `root` node is at depth `1`.

The adding rule is:
- Given the integer `depth`, for each not null tree node `cur` at the depth `depth - 1`, create two tree nodes with value `val` as `cur`'s left subtree root and right subtree root.
- `cur`'s original left subtree should be the left subtree of the new subtree root
- `cur`'s original right subtree should be the right subtree of the new subtree root
- If `depth == 1` that means there is no depth `depth - 1` at all, then create a tree node with value `val` as the new root of the whole original tree, and the original tree is the new root's left subtree.

## Example
```
Input: val = 1, depth = 2, root =
    4
   / \
  2   6
 / \  /
3  1  5

Output:
      4
     / \
    1   1
   /     \
  2       6
 / \      /
3   1     5
```

## Key Idea
We can simply use BFS to traverse the tree to find out all the nodes at level `curr - 1`. Then traverse each node and rebuild the tree.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(d) where d is the maximum number of nodes in a depth

## Solution
- [Python](./solution.py)