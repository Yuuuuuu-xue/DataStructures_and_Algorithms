## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2265

## Description
Given the `root` of a binary tree, return the number of nodes where the value of the node is equal to the average of the value in its subtree.

Note:
- the average of `n` elements is the sum of the `n` elements divided by `n` and rounded down to the nearest integer
- a subtree of `root` is a tree consisting of `root` and all of its descendants

## Example
```
Input:
    4
   / \
  8   5
 / \   \
0   1   6
Output: 5
Explanation:
- The node with value of 4 and avg = (4 + 8 + 5 + 0 + 1 + 6) / 6 = 4
- The node with value of 5 and avg = (5 + 6) / 2 = 5
- The node with value of 0 and avg = 0 / 1 = 0
- The node with value of 1 and avg = 1 / 1 = 1
- The node with value of 6 and avg = 6 / 1 = 6
```

## Key Idea
Find the sum and number of nodes in left subtree and then the avg and number of nodes in right subtree. Then calculate the sum in this subtree.

If a node with `nullptr` then return `avg = 0` and `n = 0`.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)