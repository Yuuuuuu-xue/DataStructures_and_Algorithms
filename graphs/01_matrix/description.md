## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 542

## Problem
Given an `m x n` binary matrix `mat`, return the distance of the nearest `0` for each cell. The distance between two adjacent cells is `1`.
 
## Example
```
Input: mat = 
[[0, 0, 0],
 [0, 1, 0],
 [0, 0, 0]]
Output:
[[0, 0, 0],
 [0, 1, 0],
 [0, 0, 0]]

Input: mat =
[[0, 0, 0],
 [0, 1, 0],
 [1, 1, 1]]
Output:
[[0, 0, 0],
 [0, 1, 0],
 [1, 2, 1]]
```

## Key Idea
Distance of the nearest `0` for each cell and we can traverse to each cell in 4 directions, thus it implies to solve this problem with BFS. Our initial nodes can be all the `0`. Then traverse the BFS level by level.

We can use the return matrxi as visited where initial value is `-1`. If the value `>= 0`, then it is visited.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution:
- [C++](solution.cpp)