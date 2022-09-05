## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 429

## Description
Given an n-ary tree, return the level order traversal of its nodes' values. Nary-tree input serialization is represented in their level order traversal, each group of children is separated by the null value.

## Example
```
Input: root
			1
		/ | \
	 3  2  4
	/ \
 5   6
Output: [[1], [3, 2, 4], [5, 6]]

Input:
			1
	 / / \ \
	2 3   4  5
	 / \  | / \
	6  7  8 9  10
	   |  | |
		11 12 13
		 |
		14
Output:
[[1], [2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13], [14]]
```

## Key Idea
Simply a BFS traverse

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)