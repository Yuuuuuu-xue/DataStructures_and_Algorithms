## LeetCode Problem
Medium 199

## Description
Given the `root` of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

## Example
```
Input:
  1
 / \
2   3
 \   \
  5   4
Output: [1, 3, 4]
```

## Key Idea
A simple BFS. Append the last item for each level to the output list.

## Solution
- [C++](solution.cpp)