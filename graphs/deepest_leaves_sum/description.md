## Tree
Click [here](../notes.md) to go back to the notes page.

## Description
Given the ```root``` of a binary tree, return the sum of values of its deepest leaves.

## Example
Input:
      1
     / \
    2   3
   / \   \ 
  4   5   6
 /         \
7           8
Output: 15
Explanation: 7 + 8 = 16.

## Key Idea
Simle BFS. At the last level, we sum up the leaves.

## Solution
- [Java Solution](deepest_leaves_sum.java)
