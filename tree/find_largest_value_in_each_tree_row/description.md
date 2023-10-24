## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 515

## Description
Given the `root` of a binary tree, return an array of the largest value in each row of the tree (0-indexed)

## Example
```
Input:
    1
   / \
  3   2
 / \   \
5   3   9
Output: [1, 3, 9]
```

## Key Idea
Simply traverse every node in the tree with `level`, then use a hashmap that maps the level to max value. At the end, traverse the map from smallest to largest and append it to the output.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)