## LeetCode Problem
Hard 124

## Description
A path in a binary tree is a sequence of nodes where each pair of adjacent ndoes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass though the root.

The path sum of a path is the sum of the node's values in the path.

Given the `root` of a binary tree, return the maximum path sum of any non-empty path.

## Example
```
Input:
  1
 / \
2   3
Output: 6
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6.

Input:
  -10
  / \
 9  20
    / \
   15  7
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.
```

## Key Idea
Let `curr` be the root of any subtree. Then, let the `left` be the sum of the optimal path of left subtree (including the root) and `right` be the sum of the optimal path of right subtree (including the root). Then, we can update the final output with max(left, right, left + curr->val, right + curr->val, left + right + curr->val). And return max(left + curr->val, right + curr->val). Notice, we cannot return left + right + curr->val because the tree:
```
  2
 / \
1   3
```
If we use left (1) + right (3) + curr->val (2), then we cannot use the root 2 as another path.

## Solution
- [C++](solution.cpp)