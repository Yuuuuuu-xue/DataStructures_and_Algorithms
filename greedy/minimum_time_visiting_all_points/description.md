## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Easy 1266

## Problem
On a 2D plane, there are `n` points with integer coordinates `points[i] = [x_i, y_i]`. Return the minimum time in seconds to visit all the poitns in the order given by `points`.

You can move according to these rules:
- In `1` second, can you either:
  - Move vertically by one unit
  - Move hroizontally by one unit
  - Move diagonally by one unit, move one unit vertically and then one unit horizontally in `1` second
- You have to visit the points in the same order as they appear in the array
- You are allowed to pass through points that appear later in the order, but these do not count as visits.

## Example
```
Input: [[1, 1], [3, 4], [-1, 0]]
Output: 7
Explanation: One optimal path is [1, 1] -> [2, 2] -> [3, 3] -> [3, 4] -> [2, 3] -> [1, 2] -> [0, 1] -> [-1, 0], thus total time takes 7 seconds.
```

## Key Idea
To move between two points, the optimal way is to move diagonally until the `x` value is the same or the `y` value is the same, then move either vertically only or horizontally directly.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [C++](solution.cpp)
