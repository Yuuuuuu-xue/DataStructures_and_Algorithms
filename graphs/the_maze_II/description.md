## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 505 (Premium)

## Description
There is a ball in a `maze` with empty spaces (represented as `0`) and walls (represented as `1`). The ball can go though the empty spaces by rolling up, down, left or right, but it won't stop rolling until hitting a wall. When the ball stops, it could choose the next direction.

Given the `m x n` `maze`, the ball's `start` position and the `destination`, where `start = [start_row, start_col]` and `destination = [destination_row, destination_col]`, return the shortest distance for the ball to stop at the destination. If the ball cannot stop at `destination`, return `-1`.

The distance is the number of empty spaces traveled by the ball from the start position (excluded) to the destination (included).

You may assume that the borders of the maze are all walls.

## Example
```
Input:
  [[0, 0, 1, 0, 0],
   [0, 0, 0, 0, 0],
   [0, 0, 0, 1, 0],
   [1, 1, 0, 1, 1],
   [0, 0, 0, 0, 0]]
start = [0, 4], destination: [4, 4]

Output: 12
One possible way is: left -> down -> left -> down -> right -> down -> right
```

## Key Idea
Note, for this problem, we can move the ball in one direction but the distance may increase many units. Thus, we cannot simply apply a BFS and then if we reach to the destination and immediately return the solution.

For this problem, if we want to use DFS/BFS to solve it, we may need to traverse all the possible path and keep track the minimum distance. At the end, return the minimum distance from start to destination.

Note, we can construct a weighted graph where an edge between two nodes will be the ball start at a node and move along a direction until reach to wall, then the two empty space will be two nodes and the weight of the edge is the distance between two nodes. Then we want to find the shortest weight path from start to destination. Thus, we can also apply the Dijkstras algorithm to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution
- [C++](solution.cpp)
