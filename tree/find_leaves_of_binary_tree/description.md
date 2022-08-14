## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 366

## Description
Given the `root` of a binary tree, collect a tree's nodes as if you were doing this:
- collect all the leaf nodes
- remove all the leaf nodes
- repeat until the tree is empty

## Example
```
Input:
    1
   / \ 
  2   3
 / \ 
4   5
Output: [[4, 5, 3], [2], [1]]
Explanation: [[3, 5, 4], [2], [1]] and [[3, 4, 5], [2], [1]] are also considered correct answers.
```

## Key Idea
Let `m` be a map that maps the distance from a node to its deepest leaf. Then simply perform a DFS traversal, when we reach to a leaf node, put the node m[0]. For the root of any subtree `curr`, we get the maximum value of the distance from its left subtree and right subtree, then + 1 will be the distance from `curr` to its deepest leaf. At the end, simply, get the root value to 0 and push it to the list.

## Solution
- [C++](solution.cpp)