## Tree
Click [here](../notes.md) to go back to the notes page.

## Description
Given a binary tree, determine if it is height-balanced.

A tree is **balanced** if
1. abs(left subtree max height - right subtree max height) $\leq$ 1
2. Its left subtree is a balanced binary tree
3. Its right subtree is a balanced binary tree

## Key Idea
Its definition gives us a clue how to solve this problem: recursion!

We can simply have a helper function to find the maximum height of a given tree. And use that three definitions to solve the problem recursively.

## Solution
- [Python Solution](is_balanced_binary_tree.py)
