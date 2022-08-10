## Binary Tree
Click [here](../notes.md) to go back to the notes page.

## Description
Given the `root` of a binary tree, the value of a target node `target`, and an integer `k`, return an array of the values of all nodes that have a distance `k` from the target node. You can return the answer in any order.

## Example
```
Input:
    3
   /  \
  5    1
 / \  / \
6  2  0  8
  / \
 7   4
target = 5, k = 2

Output: [7, 4, 1]
```

## Key Idea
First of all, let's convert this tree problem into a graph. Let `m` be a map that maps the node's val to a list of node values that it connects to. Then for the given target node, we can perform a BFS and find a list of nodes of distance k.

## Solution
- [C++](solution.cpp)