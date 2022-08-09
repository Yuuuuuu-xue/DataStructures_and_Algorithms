## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 314 (Premium)

## Description
Given the `root` of a binary tree, return the vertical order traversal of its node's values (i.e. from top to bottom, column by column). If two ndoes are in the same row and column, the order should be from left to right.

## Example
```
Input:
   3
  /  \
 9   20
    /   \
  15     7
Output: [[9], [3, 15], [20], 7]

Input:
      3
    /   \
   9     8
  /  \ /  \
 4   0,1   7
Output: [[4], [9], [3, 0, 1], [8], [7]]
```

## Key Idea
Let `m` be a map that maps the column to a list of node's value. Then we can assign root's column `col` as a value of 0.
- If we traverse to the left subtree, then `col` - 1.
- If we traverse to the right subtree, then `col` + 1.
At the end, build the final output by starting with minimum value of `col`.

Notic, we want top to bottom and column by column, this means we need to search level by level. Then, we will need to use BFS to solve this question.

## Solution
- [C++](solution.cpp)