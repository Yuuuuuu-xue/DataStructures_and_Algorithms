## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## Problem
Given two integer arrays `inorder` and `postorder` where `inorder` is the inorder traversal of a binary tree and `postorder` is the postorder traversal of the same tree, construct and return the binary tree.

## Example
```
Input: inorder = [9, 3, 15, 20, 7], postorder = [9, 15, 7, 20, 3]
Output:
    3 
   / \
  9   20
      / \
    15   7
```

## Key Idea
Note the inorder traversal is left - root - right and postorder traversal is left - right - root.

We know the last node of postorder traversal is the current root.

Then, how do we know which subnodes are left nodes and which are right?

In preorder list, we know anything before the root (3) is left nodes [9] and anything after is right nodes [15, 20, 7].

In postorder, we know the last node of left node in preorder will be left nodes of postorder

We will solve this problem with recursion. Let's map the node value to its index at inorder.

We have inorder_map that maps the value to its index for inorder.
We have postorder_map that maps the value to its index for postorder.

Then, the last node of postorder will be the root node.

So we start with inorder_left, inorder_right, postorder_left, postorder_right

We know that 
- root = postorder[postorder_right]
- root.left will be the left nodes, the range:
    - For inorder: left will be inorder_left, right will be the index of root - 1 since it's left - root - right, hence [inorder_left, root_i - 1]
    - For postorder: we can get the number of left nodes by root_i - 1 - inorder_left + 1, then it will be [postorder_left, postorder_left + num_left_nodes - 1]
- root.right will be the right nodes, the range:
    - For inorder: left will after root_i, hence the range [root_i + 1, inorder_right]
    - For postorder: [postorder_left+ num_left_nodes - 1 + 1, postorder_right - 1]

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python Solution](./solution.py)