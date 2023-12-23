# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1496

## Problem
Given a string `path`, where `path[i] = 'N',  'S', 'E', or 'W'`, each representing moving one unit north, south, east, or west, respectively. You start at the origin `(0, 0)` on a 2D plane and walk on the path specified by `path`.

Return `true` if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return `false` otherwise.

## Example
```
Input: path = "NES"
Output: false
Explanation: Move up one cell, move right one cell, and move down one cell, does not meet.
```

## Key Idea
Simply use a hashset to keep track of the visited position.

## Solution
- [C++](./solution.cpp)