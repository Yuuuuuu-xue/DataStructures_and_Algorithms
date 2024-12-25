## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 515

## Problem
Given the `root` of a binary tree, return an array of the largest value in each row of the tree.
 
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
We can simply use BFS to iterate over level by level.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)