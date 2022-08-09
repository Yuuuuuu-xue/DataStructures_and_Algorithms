## LeetCode Problem
Medium 230

## Description
Given the `root` of a binary search tree, and an integer `k`, return the `kth` smallest value (1-indexed) of all the values of the nodes in the tree.

## Example
```
Input:
  3
 / \
1   4
 \ 
  2
and k = 1
Output: 1

Input:
      5
     / \
    3   6
   / \
  2   4
 /
1
and k = 3
Output: 3
```

## Key Idea
If we have the number of total nodes for each subtree, then it will be O(lg n) solution since at each iteration, we can get rid of half of the tree. However, for this question, we will need to use an in order traversal: `left, root, right`. When we react to a leaf node (the left most), we move up the tree until we found the kth smallest element.

## Solution
- [C++](solution.cpp)