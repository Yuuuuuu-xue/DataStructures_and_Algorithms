## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1123

## Problem
Given the `root` of a binary tree, return the lowest common ancestor of its deepest leaves.

Recall that:
- The node of a binary tree is a leaf if and only if it has no children
- The depth of the root of the tree is `0`. If the depth of a node is `d`, the depth of each of its children is `d + 1`
- The lowest common ancestor of a set `S` of nodes, is the node `A` with the largest depth such taht every node in `S` is in the subtree with root `A`.

## Example
```
Input:
        3 
       / \
      5   1
    / \   / \
   6  2  0   8
     / \
    7   4
Output:
   2
  / \
 7   4
```

## Key Idea
We can simple perform a DFS to solve this problem.

We start with a root and call a recursive function:
- At a base case, we reach to a leaf node, we return 0
- If left node return value and right node return value is the same, then we return current node as the root since it's both children have the same depth
- If left node depth has larger value, return left node
- Otherwise right

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python Solution](./solution.py)
