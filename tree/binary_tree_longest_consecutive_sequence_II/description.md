## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 549 (Premium)

## Description
Given the `root` of a binary tree, return the length of the longest consecutive path in the tree. A consecutive path is a path where the values of the consecutive nodes in the path differ by one. THis path can be either increasing or decreasing.
- For example, `[1, 2, 3, 4]` and `[4, 3, 2, 1]` are both considered valid, but the path `[1, 2, 4, 3]` is not valid.
  
On the other hand, the path can be in the child-parent-child order, where not ncessarily be the parent-child order.

## Example
```
Input:
  1
 / \
2   3
Output: 2
Explanation: the longest consecutive path is [1, 2] or [2, 1]

Input:
  2
 / \
1   3
Output: 3
Explanation: the longest consecutive path is [1, 2, 3] or [3, 2, 1]
```

## Key Idea
We will traverse the tree and return the pair `{begin, end}` where `begin` is the longest path such that current node is the beginning of the path and `end` is the longest path such that current node is the end of the path. Then for any leaf node, we will return `{0, 0}` and any `nullptr` we will return `{0, 0}`. For any node `curr`, let `leftBegin` and `leftEnd` and `rightBegin` and `rightEnd` be the corresponding values for the left and right subtree, we will consider
- If left + root + right, so if curr->left->val + 1 == curr->val && curr->val + 1 == curr->right->val, and update the final solution to `leftEnd + 1 + rightBegin`
- If right + root + left, so if curr->right->val + 1 == curr->val && curr->val + 1 == curr->right->val, and update the final solution to `rightEnd + 1 + leftBegin`
- If left + root, so if curr->left->val + 1 == curr->val, then `end = leftEnd + 1`
- If root + left, so if curr->val + 1 == curr->left->val, then `begin = leftBegin + 1`
- If right + root, so if curr->right->val + 1 == curr->val, then `end = rightEnd + 1`
- If root + right, so if curr->val + 1 == curr->right->val, then `begin = rightBegin + 1`

If at the end, if we do not match with the last four cases, then update the final solution with max length of the left subtree and right subtree, and return `{1, 1}`.

## Complexity Analysis
- Runtime Complexity: O(h)
- Space Complexity: O(h)

## Solution
- [C++](solution.cpp)