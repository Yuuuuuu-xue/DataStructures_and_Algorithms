# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Medium 3443

## Problem
You are given a string `s` consisting of the characters `'N'`, `'S'`, `'E'` and `'W'` where `s[i]` indicates movements in an infinite grid:
- `'N'`: move north by 1 unit
- `'S'`: move south by 1 unit
- `'E'`: move east by 1 unit
- `'W'`: move west by 1 unit

Initially, you are at the origin `(0, 0)`. You can change at most `k` characters to any of the four directions.

Find the maximum Manhattan distance from the origin that can be achieved at any time while performing the movements in order.

The Manhattan Distance between two cells `(x_i, y_i)` and `(x_j, y_j)` is `|x_i - x_j| + |y_i - y_j|`.

## Example
```
Input: s = "NWSE", k = 1
Output: 3
```

## Key Idea
We can basically try all the possible solution in the given four directions:
- `NW`, `NE`, `SW`, `SE`

If the direction is not in the direction we want to go, we subtract the Manhattan distance by 1 otherwise increase by 1.

If we have `k > 0`, we can subtract it by 1 and increment the Manahattan distance.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)