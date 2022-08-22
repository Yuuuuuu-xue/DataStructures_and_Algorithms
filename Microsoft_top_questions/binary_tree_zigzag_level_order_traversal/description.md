## LeetCode Question
Medium 103

## Description
Given the `root` of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e. from left to right, then from right to left for the next level and alternate between).

## Example
```
Input:
  3
 / \
9  20
   / \
  15  7
Output:
[[3], [20, 9], [15, 7]]
```

## Key Idea
A simple BFS and let `currDepth` be the current depth. When `curr` is odd, then the reverse the nodes in that depth.

## Complexity Analysis
- Time complexity: Each operation will take `O(n)` 
- Space complexity: Each operation will take extra `O(n)` space

## Solution
- [C++](solution.cpp)
