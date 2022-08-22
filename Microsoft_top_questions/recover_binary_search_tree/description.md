## LeetCode Question
Medium 99

## Description
You are given the `root` of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

## Example
```
Input:
  1
 /
3
 \ 
  2
Output:
  3
 /
1
 \
  2

Input:
  3
 / \
1   4
   / 
  2
Output:
  2
 / \
1   4
   / 
  3
```

## Key Idea
The key idea for this question is that the in-order-traversal (left, root, right) of a BST will be a sorted array. Then we need to find the two nodes that are not sorted. So for given any almost sorted arrays (2 items are not sorted), `[1, 6, 3, 4, 2]`, we should able to find the two item `6` and `2` and swap them. Then notice 3 > 2 is not sorted, thus we should swap them. So we will perform an inorder traversal, we will traverse the tree in (left, root, right) order and for each node, return its node. If curr->val < the previous node value, then we found the first point to swap, store `[prevNode, currNode]`. Then we will try to find a second point that curr->val < the previous node value. Note it may have 1 or 2 swap points because we may have `[1, 3, 2, 4]`, then `[3, 2]` will be a single swap point but in the example `[1, 6, 3, 4, 2]` will be 2 swap points `[6, 3]` and `[4, 2]`.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n) (size of the stack)
 
## Solution
- [C++](solution.cpp)