## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an integer array `nums` where the elements are sorted in ascedning order, convert it to a height-balanced binary search tree. A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one. 

## Example
```
Input: nums = [-10, -3, 0, 5, 9]
Output:
    10
   / \
  -3  9
 /	 / 
-10	 5

this also works:
	0
 / \
-10	5
 \   \
 -3  	9
```

## Key Idea
Since the array is sorted, set `i` and `j` be two pointers with initial value 0 and n - 1. Then we can make the mid valiue to be the root and thus 0 to mid - 1 will be left subtree and mid + 1 to j will be right subtree. Then we can recursively build the tree.

## Solution
- [C++](./solution.cpp)