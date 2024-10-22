## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2583

## Problem
You are given the `root` of a binary tree and a positive integer `k`.

The level sum in the tree is the sum of the values of the nodes that are on the same level.

Return the `kth` largest level sum in the tree (not necessarily distinct). If there are fewer than `k` levels in the tree, return `-1`.

Note that two nodes are on the same level if they have the same distance from the root.

## Example
```
Input: root = [5, 8, 9, 2, 1, 3, 7, 4, 6], k = 2
Outpout: 13
Explanation: The level sum are the following:
- Level 1: 5
- Level 2: 8 + 9 = 17
- Level 3: 2 + 1 + 3 + 7 = 13
- Level 4: 4 + 6 = 10
The 2nd largest level sum is 13
```

## Key Idea
We can simply use BFS to compute the level sum and push it the heap. Then we can simply sort the level sum array and return `kth` largest value.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)