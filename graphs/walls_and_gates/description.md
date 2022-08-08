## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 286 (Premium)

## Description
You are given an `m x n` grid `rooms` initialized with these three possible values.
- `-1` A wall or an obstacle
- `0` A gate
- `INF` infinity means an empty room. We use the value `2^31 - 1 = 2147483647` to represent `INF` as you may assume that the distance to a gate is less than this value.

Fill each empty room with the distance to its `nearest gate`. If it is impossible to reach a gate, it should be filled with `INF`.

## Example
```
Input: rooms =
  [[INF, -1, 0, INF]
   [INF, INF, INF, -1],
   [INF, -1, INF, -1],
   [0, -1, INF, INF]]
Output:
  [[3, -1, 0, 1],
   [2, 2, 1, -1],
   [1, -1, 2, -1],
   [0, -1, 3, 4]]
```

## Key Idea
When we want ot find the shortest distance to the gate, it provides a hint to use BFS to solve this problem. Notice, the distance to a gate starting at the gate is 0 and starting at the gate's neighbor is 1. So we can first of all, get a list of gate's position and applies BFS starting at the each gate, update the minimum distance for each empty room.

## Solution
- [C++](solution.cpp)
