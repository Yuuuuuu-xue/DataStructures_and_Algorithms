## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1110

## Problem
Given the `root` of a binary tree, each node in the tree has a distinct value. 

After deleting all nodes with a value in `to_delete`, we are left with a forest (a disjoint union of trees).

Return the roots of the trees in the remaining forest. You may return the result in any order.

## Example
```
Input: 
    1
   / \
  2   3
 / \ / \
4  5 6  7 , to_delete = [3, 5]
Output: 
    1       6      7
   /    
  2
 /
4
```

## Key Idea
We can simply use a recursion to solve this problem.

If `curr.val` is in the `to_delete`, then we remove `curr.val` and recursively call it with `curr.left` and `curr.right`.

If `curr.val` is not in the `to_delete`, we need to know if it's the root or not. Thus, when we initial call a recursive on a node and it's root, we append it to the output list and we recursive call it with `curr.left` and `curr.right` where they are the root.

At the end, update `root.left` and `root.right` if they are in the `to_delete` or not.

## Complexity Analaysis
- Runtime Complexity: O(n)
- Space Complexity: O(n) we need to convert `to_delete` to a set.

## Solution
- [Python](./solution.py)