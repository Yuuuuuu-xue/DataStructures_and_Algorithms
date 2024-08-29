## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 947

## Problem
On a 2D plane, we place `n` stones at some integer coordinate points. Each coordinate point may have at most one stone.

A stone can be removed if it shares either the same row or the same column as another stone that has not been removed.

Given an array `stones` of length `n` where `stones[i] = [x_i, y_i]` represents the location of the `ith` stone, return the largest possible number of stones that can be removed.

## Example
```
Input: stones = [[0, 0], [0, 1], [1, 0], [1, 2], [2, 1], [2, 2]]
Output: 5
Explanation: One way to remove 5 stones is as follows:
1. Remove stone [2, 2] as it shares the same row as [2, 1]
2. Remove stone [2, 1] as it shares the same column as [0, 1]
3. Remove stone [1, 2] as it shares the same row as [1, 0]
4. Remove stone [1, 0] as it shares the same column as [0, 0]
5. Remove stone [0, 1] as it shares the same column as [0, 0]
```

## Key Idea
If we treat the stone in the same row and column as neighbor, then we can simply use a DFS to solve this problem. We apply DFS to every unvisited node and when DFS ends, the number of nodes in the path - 1 will be the number of stones that we can remove.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
