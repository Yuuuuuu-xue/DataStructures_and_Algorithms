## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 501

## Problem
Given the `root` of a binary search tree (BST) with duplicates, return all the model(s) (i.e. most frequently occurred element) in it.

If the tree has more than one mode, return them in any order.

## Example
```
Input:
  1
   \
    2
   /
  2
Output: [2]
```

## Key Idea
Since it's a binary search tree, we can look at it as a sorted array. If we have a sorted array, then we can simply compare to the next element to get the frequency. We can traverse the tree inorder to make it as a sorted array.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)