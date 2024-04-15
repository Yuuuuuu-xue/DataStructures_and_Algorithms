## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 129

## Problem
You are given the `root` of a binary tree containing digits from `0` to `9` only.

Each root-to-leaf path in the tree represents a number
- For example, the root-to-leaf `1 -> 2 -> 3` represents the number `123`

Return the total sum of all-to-leaf numbers. Test cases are generated so that the answer will fit in a 32-bit integer.

A leaf node is a node with no children.

## Example
```
Input:
    4
   / \
  9   0
 / \
5   1
Output: 1026
Explanation:
The root-to-leaf path:
1. 4->9->5 represents the number 495
2. 4->9->1 represents the number 491
3. 4->0 represents the number of 40
The sum 495 + 491 + 40 = 1026
```

## Key Idea
Simply traverse the tree and the let `currNum` from the root to current node. We can update it by `currNum * 10 + currNode.val`.

## Complexity Analysis
- Runtime Complexity: O(n)
Space Complexity: O(h) which is the height of the tree

## Solution
- [Python](./solution.py)