## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 637

## Description
Given the `root` of a binary tree, return the average value of the nodes on each level in the form of an array. Answer within `10^-5` of the actual answer will be accepted.

## Example
```
Input:
	3
 / \
9  	20
		/ \
	 15  7
Output: [3.0, 14.5, 11.0]
Explanation:
- the average value of nodes on level 0 is 3
- the average value of nodes on level 1 is 14.5
- the average value of nodes on level 2 is 11

Input:
		3
	 / \
	9  20
 / \
15	7
Output: [3.0, 14.5, 11.0]
```

## Key Idea
Simply run a BFS and find the average on each level and push it to the final output array.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)