## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2196

## Problem
You are given a 2D integer array `descriptions` where `descriptions[i] = [parent_i, child_i, is_left_i]` indicates that `parent_i` is the parent of `child_i` in a binary tree of unique values. Furthermore,
- if `is_left_i == 1`, then `child_i` is the left child of `parent_i`
- if `is_left_i == 0`, then `child_i` is the right child of `parent_i`

Construct the binary tree described by `descriptions` and return its root.

The test cases will be generated such that the binary tree is valid.

## Example
```
Input: descriptions = [[20, 15, 1], [20, 17, 0], [50, 20, 1], [50, 80, 0], [80, 19, 1]]
Output: [50, 20, 80, 15, 17, 19]
Explanation: The root node is the node with value 50 since it has no parent.
```

## Key Idea
We build the binary tree and use a map that maps its value to its node. Then we can find the node and update it with constant time.

Now, we need to identify which node is a root node. The keys in the map is all the possible node and we can simply use a set to keep track of nodes that has parent. At the end, the only node without parent should be the root.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
