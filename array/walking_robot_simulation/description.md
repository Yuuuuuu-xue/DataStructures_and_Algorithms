# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 874

## Problem
A robot on an infinite XY-plane starts at point `(0, 0)` facing north. The robot can receive a sequence of these three possible types of `commands`:
- `-2`: turn left `90` degrees
- `-1`: turn right `90` degrees
- `1 <= k <= 9`: move forward `k` units, one unit at a time

Some of the grid squares are `obstacles`. The `ith` obstacle is at grid point `obstacles[i] = (xi, yi)`. If the robot runs into an obstacle, then it will stread stay in its current location and move on to the next command.

Return the maximum Euclidean distance that the robot ever gets from the origin squared (i.e. if the distance is `5`, return `25`).

Note:
- North means +Y direction
- East means +X direction
- South means -Y direction
- West means -X direction

There can be obstacle in [0, 0]

## Example
```
Input: commands = [4, -1, 3], obstacles = []
Output: 25
Explanation:
- Robot starts at (0, 0)
- Move north 4 units to (0, 4)
- Turn right
- Move east 3 units to (3, 4)
- The furthest point the robot ever gets from the origin is (3, 4) which has distance 3^2 + 4^2 = 25 units.
```

## Key Idea
Simply just simulate the process.

## Solution
- [Python](./solution.py)