## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 779

## Description
We build a table of `n` rows (1-indexed). WE start by writing `0` in the `1st` row. Now in every subsequent row, we look at the previous row and replace each occurrence of `0` with `01` and each occurrence of `1` with `10`.

For example, for `n == 3`, the `1st` row is `0`, the `2nd` row is `01`, and `3rd` row is `0110`.

Given two integer `n` and `k`, return the `kth` (1indexed) symbol in the `nth` row of a table of `n` rows.

## Example
```
Input: n = 1, k = 1
Output: 0
Explanation:
- row 1: 0

Input: n = 2, k = 1
Output: 0
Explanation:
- row 1: 0
- row 2: 01

Input: n = 2, k = 2
Output: 1
```

## Key Idea
This essentially is like a binary tree. Where we start with a root with value `0`. If subtree root has a value `0`, then its left subtree root has a value of `0` and right subtree has a value of `1`. If subtree root has a value `1`, then its left subtree root has a value of `1` and right subtree has a value of `0`.

Then we can basically traverse the tree and return the value until we reach the leaf.

We start at the leaf and move up until we reach to the root and then, we return `1` or `0`, then, use that to figure out the final solution recursively. Let `mid = 2^{N - 1} / 2` be the mid value of previous row, then if `k > mid`, we know its on right subtree otherwise left. Thus we can recusively find this solution with `k` or `k - mid` depends on if its on the left or right subtree.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)