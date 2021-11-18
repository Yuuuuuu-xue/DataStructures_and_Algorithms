## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## Description
Given the ***root*** of a binary search tree, return a ***balanced*** binary search tree with the same node values. If there is more than one answer, return ***any of them***.

A binary search tree is ***balanced*** if the depth of the two subtrees of every node never differs by more than one.

## Example
If we have the input tree:
```
  1
   \
    2
     \
      3
       \
        4
```
Then the output tree should be:
```
    2
   / \
  1   3
       \
        4
```
Another possible way is:
```
    3
   / \
  1   4
   \
    2
```

## Solution
- [Python Solution](binary_tree_level_order_traversal.py)