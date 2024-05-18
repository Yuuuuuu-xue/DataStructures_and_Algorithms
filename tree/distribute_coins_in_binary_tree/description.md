## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 979

## Problem
You are given the `root` of a binary tree with `n` nodes where each `node` in the tree has `node.val` coins. There are `n` coins in total throughout the whole tree.

In one move, we may choose two adjacent nodes and move one coin from one node to another. A move may be from parent to child, or from child to parent.

Return the minimum number of moves required to make every node have exactly one coin.

## Example
```
Input: tree
  3
 / \
0   0
Output: 2
Explanation: send one coin to each leaf node from root. Thus every node has 1 coin and takes 2 steps.

Input: 
  0
 / \
3   0
Output: 3
Explanation: One leaf sends two coins to root. Root sends one coin to another leaf. Thus, total three steps.
```

## Key Idea
If we start with root, we don't need the exact amount of coins send to the either children.

Thus, we need to start the leaf node and returns something to parent.

For each node, we will return the number of coins needed to send to this level. If the number of coins needed is positive, this means the current node has extra coins that need to send to parent. If the number of coins needed is negative, this means the current node needs those number of coins. If the number equals to 0, then this means the subtree rooted at children then every node in this subtree has exactly one coin.

Then, for each node, we collect the number of coins needed/returned from each children. Then we can increment the sum of abs of those coins as the number of steps. Then the sum of the actual value is the total number of coins we need to returend/needed. THe `curr.val` is the number of coins we have at the current node. Then the total the number of coins returned for this node equals to `curr.val + sum of child - 1` since `-1` is the `1` coin for the current node.

## Complexity Analaysis
- Runtime Complexity: O(h)
- Space Complexity: O(h)

## Solution
- [Python](./solution.py)