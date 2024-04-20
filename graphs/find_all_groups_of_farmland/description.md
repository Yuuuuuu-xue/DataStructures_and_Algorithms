## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1992

## Problem
You are given a 0-indexed `m x n` binary matrix `land` where a `0` represents a hectare of forested land and a `1` represents a hectare of farmland.

To keep the land organized, there are designated rectangular areas of hectares that consist entirely of farmland. These rectangular areas are called groups. No two groups are adjacent, meaning farmland in one group is not four-directionally adjacent to another farmland in a different group.

`land` can be represented by a coordinate system where the top left corner of `land` is `(0, 0)` and the bottom right corner of `land` is `(m - 1, n - 1)`. Find the coordinates of the top left and bottom right corner of each group of farmland. A group of farmland with a top left corner at `(r1, c1)` and a bottom right corner at `(r2, c2)` is represented by the 4-length array `[r1, c1, r2, c2]`.

Return a 2D array containing the 4-length arrays described above for each group of farmland in `land`. If there are no groups of farmland, return an empty array. You may return the answer in any order.

## Example
```
Input: land =
[[1, 0, 0],
 [0, 1, 1],
 [0, 1, 1]]
Output: [[0, 0, 0, 0], [1, 1, 2, 2]]
```

## Key Idea
Simply use a DFS or BFS to traverse all the lands. For the direction, we will let bottom and right to be the last direction so when we reach to the last cell, it must be a bottom right corner.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(1) since we can modify the cell to be `-1` as visited if its original value is `1`. We won't visit the cell with value `0`.

## Solution:
- [Python](./solution.py)