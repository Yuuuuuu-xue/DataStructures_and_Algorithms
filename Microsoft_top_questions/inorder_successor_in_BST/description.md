## LeetCode Question
Medium 285 (Premium)

## Description
Given the `root` of a binary search tree and a node `p` in it, return the `in-order successor` of that node in the BST. If the given node has no in-order successor in the tree, return `null`. The successor of a node `p` is the node with the smallest key greater than `p.val`.

## Example
```
Input:
  2
 / \
1   3
p = 1
Output: 2
Explanation: 1's in-order successor node is 2. Note that both p and return value is of TreeNode type.

Input:
      5
     / \
    3   6
   / \
  2   4
 /
1
p = 6
Output: null
```

## Key Idea
We will traverse the tree with the in-order successor `succ` node as well. Initially, it will be null.
- If `curr->val == p->val`, then we find its right subtree's left most child. If exists, then return it. Otherwise we return `succ`.
- If `curr->val < p->val`, this means `p` is in its right subtree. We will move to the right subtree and not updating `succ` to `curr` because `curr->val < p->val`.
- If `curr->val > p->val`, this means `p` is in its left subtree. We will move to the left subtree and updating `succ` to `curr` because `curr->val > p->val`.

## Complexity Analysis
- Time complexity: O(height)
- Space complexity: O(height)

## Solution
- [C++](solution.cpp)