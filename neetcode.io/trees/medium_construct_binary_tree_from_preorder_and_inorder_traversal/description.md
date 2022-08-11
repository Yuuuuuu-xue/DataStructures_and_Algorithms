## LeetCode Problem
Medium 105

## Description
Given two integers array `preorder` and `inorder` where `preorder` is the preorder traversal of a binary tree and `inorder` is the inorder traversal of the same tree, construct and return the binary tree.

## Example
```
Input: preorder = [3, 9, 20, 15, 7], inorder = [9, 3, 15, 20, 7]
Output: 
  3
 / \
9  20
   / \
  15  7
```

## Key Idea
Preorder: root left right and inorder: left root right. Notice we from preorder, we know the root, then we can find the root in the inorder, then everything before root will be the left subtree and everything after root will be the right subtree. In order to have efficient lookup for root in the inorder, let `m` be a map that maps the number in `inorder` to its index. Thus, we have constant time lookup.

Let `preorderLeftI` and `preorderRightI` be indicies of the `preorder`. Similarly, we have the `inorderLeftI` and `inorderRightI`. Then, `preorder[preorderLeftI]` will be the root node. We can also use this value to find the `rootI` in the `inorder`. Then 
- `inorder[inorderLeftI:rootI]` will be the nodes in the left subtree
- `inorder[rootI + 1:inorderRightI + 1]` will be the nodes in the right subtree
- `preorder[preorderLeftI + 1:preorderLeftI + 1 + rootI - inorderLeftI]` will be the nodes in the left subtree. + 1 because first node is the root node. Then we add the number of left nodes (rootI - inorderLeftI + 1) in the `inorder` - 1 because 0 basedi ndex.
- `preorder[preorderLeftI + 1 + rootI - inorderLeftI:preorderRightI]`.

## Solution
- [C++](solution.cpp)