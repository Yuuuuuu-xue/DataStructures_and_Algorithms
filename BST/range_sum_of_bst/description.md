## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 938

## Problem
Given the `root` node of a binary search tree and two integers `low` and `high`, return the sum of values of all nodes with a value in the inclusive range `[low, high]`.

## Example
```
Input:
    10
   / \
  5   15
 / \    \
3   7   18
Output: 32
Explanation: Nodes with value 7, 10 and 15 are in the range `[7, 15]` and `7 + 10 + 15 = 32`
```

## Key Idea
Simply traverse the `bst`, if curr node is within the range, then update the final output.

If `curr.val < low`, then there is no need to search the left side.

If `curr.val > high`, then there is no need to search the right side.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)