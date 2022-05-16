## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 1091

## Description
Given an ```n * n``` binary matrix ```grid```, return the length of the shortest clear path in the matrix. If there is no clear path, return ```-1```.

A clear path in a binary matrix is a path from the top-left cell ```(0, 0)``` to the bottom-right cell ```(n - 1, n - 1)``` such that:
- All the visited cells of the path are ```0```
- All the adjacent cells of the path are 8-directionally connected

The length of a clear path is the number of visited cells of this path.

## Example
```
Input: 
  [[0, 1], 
   [1, 0]]
Output: 2
Explanation: (0, 0) to (1, 1), thus two cells

Input:
  [[0, 0, 0],
   [1, 1, 0],
   [1, 1, 0]]
Output: 4
Explanation: (0, 0) to (0, 1) to (1, 2) to (2, 2)

Input:
  [[1, 0, 0],
   [1, 1, 0],
   [1, 1, 0]]
Output: -1
```

## Key Idea
To find the shortest path, the first thing we need to consider is BFS. Note, in this problem, we may have infinite loops. Consider there is no solution and we can move from (0, 0) to (0, 1) and (0, 1) back to (0, 0). Therefore, we will use a hashset to keep track of visited cells and only add cells to the queue iff we haven't visited it before. But it takes extra space. We can instead modify the visited cells to have a value of 1 so we won't visit it again.

## Solution
- [Java Solution](shortest_path_in_binary_matrix.java)
