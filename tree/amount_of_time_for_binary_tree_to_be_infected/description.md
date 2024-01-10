## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2385

## Description
You are given the `root` of a binary tree with unique values, and an integer `start`. At minute `0`, an infection starts from the node with value `start`.

Each minute, a node becomes infected if:
- The node is currently uninfected.
- The node is adjacent to an infected node

Return the number of minutes needed for the netire tree to be infected.

## Example
```
Input:
       1
     /  \
    5     3
     \    /\
      4  10 6
     / \
    9   2
```

## Key Idea
First of all, convert the tree into graph and use BFS or DFS to find out the distance from that node to all other nodes.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)