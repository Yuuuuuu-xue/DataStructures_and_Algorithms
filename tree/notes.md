DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Tree](#tree)
- [Examples:](#examples)
    - [Is Balanced Binary Tree](#is-balanced-binary-tree)
    - [Binary Tree Level Order Traversal](#binary-tree-level-order-traversal)

## Tree
- **height** of a tree is the length of the longest path from the root to a child
  - The height of a tree consisting of a single node is 0
- **depth** of a tree is the length of the path from the root to that node
  - The depth of the root is 0
- **predecessor**: one step left and then right till you can
- **successor**: one step right and then left till you can
- **in order**: left subtree, root, right subtree
- **pre order**: root, left subtree, right subtree
- **post order**: left subtree, right subtree, root
- **complete binary tree**:
   1. all the leaves must lean to left.
   2. the last leaf element might not have a right subling. It doesn't have to be a
        full binary tree.

## Examples:
#### [Is Balanced Binary Tree](is_balanced_binary_tree/description.md)
#### [Binary Tree Level Order Traversal](binary_tree_level_order_traversal/description.md)