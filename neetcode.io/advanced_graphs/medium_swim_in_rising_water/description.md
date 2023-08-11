## LeetCode Problem
Hard 778

## Description
You are given an `n x n` integer matrix `grid` where each value `grid[i][j]` represents the elevation at that point `(i, j)`.

The rain starts to fall, at time `t`, the depth of the water everywhere is `t`. You can swim from a square to another 4-directionally adjacent square if and only if the elevation of both squares individually are at most `t`. You can swim infinite distances in zero time. Of course, you must stay within the boundaries of the grid during your swim.

Return the least time until you can reach the bottom right square `(n - 1, n - 1)` if you start at the top left square `(0, 0)`.
 
## Example
```
Input: grid = 
[[0, 2],
 [1, 3]]
Output: 3

grid = [[0,1,2,3,4],[24,23,22,21,5],[12,13,14,15,16],[11,17,18,19,20],[10,9,8,7,6]]
Output: 16
Explanation: the final path:
[[(0),(1),(2),(3),(4)],
 [24,23,22,21,(5)],
 [(12),(13),(14),(15),(16)],
 [(11),17,18,19,20],
 [(10),(9),(8),(7),(6)]]
```

## Basic Idea
We can solve this problem with BFS and priority queue where the priority is based on the current depth at the given position `(i, j)`. Thus, everytime we pop an item from the priority queue, we have the minimum depth to reach `(i, j)` and thus we do not need to visit the same position again. Then, we start visit the neighbor positions `(x, y)`, push back a new item to priority queue if not visited with `priority` t = `max(currDepth, depth at x, y)`.

## Complexity Analysis
- Runtime Complexity: O((n ^ 2) * lg (n ^ 2)) for BFS with priority queue
- Space Complexity: O(n ^ 2)

## Solution
- [C++](./solution.cpp)