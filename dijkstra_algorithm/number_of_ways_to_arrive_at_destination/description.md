## Dijkstra Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 1976

## Problem
You are in a city that consists of `n` intersections numbered from `0` to `n - 1` with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and there is at most one road between any two intersections.

You are given an integer `n` and a 2D integer array `roads` where `roads[i] = [u_i, v_i, time_i]` means that there is a road between intersections `u_i` and `v_i` that takes `time_i` minutes to travel. You want to know in how may ways you can travel from intersection `0` to intersection `n - 1` in the shortest amount of time.

Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo `10 ** 9 + 7`.

## Example
```
Input: n = 7, roads = [[0, 6, 7], [0, 1, 2], [1, 2, 3], [1, 3, 3], [6, 3, 3], [3, 5, 1], [6, 5, 1], [2, 5, 1], [0, 4, 5], [4, 6, 2]]
Output: 4
Explanation: The shortest amount of time it takes to go from intersection 0 to intersection 6 is 7 minutes. There are four ways:
- 0 -> 6
- 0 -> 4 -> 6
- 0 -> 1 -> 2 -> 5 -> 6
- 0 -> 1 -> 3 -> 5 -> 6
```

## Key Idea
We can simply use Disjkstra's algorithm to solve this problem to find out the shortest path from given node to every other node. This way, we can find the shorest path reach to the node from 0 to n - 1.

Then we can simply use a list that tracks the number of shortest paths reach to the node.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
