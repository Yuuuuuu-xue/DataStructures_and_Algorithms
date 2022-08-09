## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1469 (Easy)

## Description
In a binary tree, a lonely node is a node that is the only child of its parent node. The root of the tree is not lonely because it doesx not have a parent node. Given the `root` of a binary tree, return an array containing the values of all lonely nodes in the tree. Return the list in any order.

## Example
```
Input:
    1
   / \
  2   3
   \
    4
Output: [4]
Explanation: Node 1 is the root and is not lonely. Node 2 and 3 have the same parent and are not lonely. 

Input:
    7
   / \
  1   4
 /   / \
6   5   3
         \
          2
Output: [6, 2]
```

## Key Idea
We will traverse each node in the tree. For any node `n`, if it has only one child, then it's children is a lonely child.

## Solution
- [C++](solution.cpp)