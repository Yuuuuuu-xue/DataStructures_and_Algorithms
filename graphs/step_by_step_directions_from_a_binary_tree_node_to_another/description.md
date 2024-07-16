## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2096

## Problem
You are given the `root` of a binary tree with `n` nodes. Each node is uniquely assigned a value from `1` to `n`. You are also given an integer `startValue` representing the value of the start node `s`, and a different integer `destValue` representing the value of the destination node `t`.

Find the shortest path starting from node `s` and ending at node `t`. Generate step-by-step directions of such path as a string consisting of only the uppercase letters `'L'`, `'R'`, and `'U'`. Each letter indicates a specific direction:
- `'L'` means to go from a node to its left child node
- `'R'` means to go from a node to its right child node
- `'U'` means to go from a node to its parent node

Return the step-by-step directions of the shorest path from node `s` to node `t`.

## Example
Input:
    5
   / \
  1   2
 /   / \
3   6   4, startValue = 3, destValue = 6
Output: "UURL"
Explanation: The shorest path is 3 -> 1 -> 5 -> 2 -> 6

## Key Idea
We can simply use DFS to find the path from `root` to the `startValue` and `endValue`. 

If the root value is on the left, we append `L` to the current path and if on the right, we append `R`.

Then, note, if `startValPath` and `endValPath` has the same letter, it means they has the same common ancestor where we can pop from `startValPath` and `endValPath`.

At the end, the path from `startValPath` to the lowest common ancestor of both `start` and `end`, will all the `U`. Then followed by the reversed of `endValPath`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)