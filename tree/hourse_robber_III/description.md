## Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 337

## Problem
The thief has found himself a new place for his thievery again. There is only one entrance to this area, called `root`.

Besides the `root`, each house has one and only one parent house. After a tour, the smart thief realized that all houses in this place form a binary tree. It will automattically contact the police if two directed-lined houses were broken into on the same night.

Given the `root` of the binary tree, return the maximum amount of money the thief can rob without alterting the police.

## Example
```
Input:
  3
 / \
2   3
 \   \
  3   1
Output: 7
Explanation: the maximum amount of money the thief can rob = 3 + 3 + 1 = 7

Input:
    3
   / \
  4   5
 / \   \
1   3   1
Output: 9
Explanation: the maximum amount of money the thief can rob = 4 + 5 = 9
```

## Key Idea
WE will traverse the tree with DFS. For each node, we will return a pair of integers which represent the maximum amount of money that rob the current node and not rob the current node. So if we reach to a nullptr, then return a pair of 0 values. For any node `curr`, we have the `left` and `right` pair of integer where the first integer represents the maximum value that rob its current node and second integer represents the maximum value that do not rob the currnet node. Then,
- If we want to rob the `curr` node, then we cannot rob its two children node, and thus the first integer is `curr->val + left.second + right.second`.
- IF we want to skip `curr` node, then we can rob its two children node, and thus `max(left.first + right.first, left.first + right.second, left.second + right.first, left.second + right.second)`.

## Solution
- [C++](solution.cpp)
