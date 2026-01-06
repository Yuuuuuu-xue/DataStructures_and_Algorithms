## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1161

## Problem
Given the `root` of a binary tree, the level of its root is `1`, the level of its children is `2` and so on.

Return the smallest level `x` such taht the sum of all the values of nodes at level `x` is maximal.

## Example
```
Input: root =
        1
       / \
      7   0
     / \
    7   -8
Output: 2
Explanation:
- Level 1 sum = 1
- Level 2 = 7
- Level 3 = -1
```

## Key Idea
Simple a BFS traversal.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)