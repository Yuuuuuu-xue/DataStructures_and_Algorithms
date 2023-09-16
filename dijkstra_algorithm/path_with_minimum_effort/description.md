## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 1631

## Description
You are a hiker preparting for an upcoming hike. You are given `heights`, a 2D array of size `rows x columns` where `heights[row][col]` represents the height of cell `(row, col)`. You are situated in the topleft cell, `(0, 0)` and you hope to travel to the bottom right cell `(rows - 1, columns - 1)`. You can move up, down, left, and right, and you wish to find a route that requires the minimum effort.

A route's effort is the maximum absolute difference in heights between two consecutive cells of the route.

Return the minimum effort required to travel from the top-left cell to the bottom-right cell.

## Example
```
Input: heights =
[[1, 2, 2],
 [3, 8, 2],
 [5, 3, 5]]
Output: 2
Explanation: The route of [1, 3, 5, 3, 5] has a maximum absolute difference of 2 in consecutive cells.

Input: heights =
[[1, 2, 1, 1, 1],
 [1, 2, 1, 2, 1],
 [1, 2, 1, 2, 1],
 [1, 2, 1, 2, 1],
 [1, 1, 1, 2, 1]]
Output: 0
```

## Key Idea
We will solve this problem with Dijkstra's algorithm where we use a priority queue with BFS. We first push `(priority, i, j) = (0, 0, 0)` to a priority queue and initialize a map that maps a position to a seen priority (i.e. initial value = `-1`). Then we simply perform a BFS, if we visit a neighbor that has a smaller priority, then we update the map and push to the queue.

This problem will work because suppose there is a path with smaller effort to reach to a point `(x, y)`, then by the property of priority queue, we must visit the point `(x, y)` with the minimum effort, all other possible ways with higher effort are the children of the heap.

## Solution
- [C++](solution.cpp)
