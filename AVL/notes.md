DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Complete Binary Tree](#complete-binary-tree)
- [AVL](#avl)
- [Examples](#examples)

## Complete Binary Tree
- It has 2^{h + 1} - 1 nodes of height h

## AVL
- A binary search tree with height ceil(lg n).
- The **balance factor** of a node is the height of its right subtree minus the height of its left subtree
- A node satisfies the **AVL invariant** if its balance factor is -1, 0, or 1. 
- A binary tree is **AVL-balanced** if and only if all of its nodes satisfy the AVL invariant.
- An **AVL tree** is a binary search tree which is AVL-balanced.

## Examples
- [Implementation](implementation/description.md)