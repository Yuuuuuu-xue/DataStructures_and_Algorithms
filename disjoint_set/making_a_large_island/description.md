## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 827

## Problem
You are given an `n x n` binary matrix `grid`. You are allowed to change at most one `0` to `1`.

Return the size of the largest island in `grid` after applying this operation.

An island is a 4-directionally connected group of `1`s.

## Example
```
Input: grid = [[1, 0], [0, 1]]
Output: 3
Explanation: Change one of the `0` to 1 can result in two `1`s.

Input: grid = [[1, 1], [1, 1]]
Output: 4
```

## Key Idea
When there is the number of groups (islands), then it provides a hint to solve this problem with disjoint set.

We can use disjoint set with path compression to group all the islands in a group and we will have a counter so that given a key in the disjoint set, we can return the number of elements in this group.

After we build the graph, the initial value be the maximum number of members in one group. Then loop over all the element, if an element is 0, it tries to connect to its neighbor by adding the number of elements in neighbor group to output if this is a new group connected to the current node.

## Complexity Analysis
- Runtime Complexity: O(n * n)
- Space Complexity: O(n * n)

## Solution:
- [Python](./solution.py)