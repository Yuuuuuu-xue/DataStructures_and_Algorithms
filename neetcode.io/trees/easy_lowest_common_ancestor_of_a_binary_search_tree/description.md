## LeetCode Problem
Easy 235

## Description
Given a binary search tree (BFT), find the lowest common ancestor (LCA) node of two given nodes in the BST. According to the definition of LCA on Wikipedia: "the lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow a node to be a descendant of itself).

Assume all nodes value are unique

## Example
```
Input Tree:
     6
   /   \
  2     8
 / \   / \
0   4 7   9
   / \
  3   5

Input: p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6

Input: p = 2, q = 4
Output: 2
The LCA of ndoes 2 and 4 is 2, since a node can be a descendant of itself
```

## Key Idea
Simply traverse the tree and let `curr` be a root of any subtree. If `curr` is either `p` or `q`, then we can return curr because the other node must be its descendant. Since tree is a BST, we check if
- `p->val` < `curr.val` < `q->val`, then we can return `curr` because `p` must be in the left subtree and `q` must be in the right subtree and thus `curr` is LCA.
- `p->val` > `curr.val` > `q->val`, then we can return `curr` because `p` must be in the right subtree and `q` must be in the left subtree and thus `curr` is LCA.
- `curr.val` > `p.val` and `q.val`, then both `p` and `q` are in the left subtree and thus we move to the left subtree
- `curr.val` < `p.val` and `q.val`, then both `p` and `q` are in the right subtree and thus we move to the right subtree

## Solution
- [C++](solution.cpp)