## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2463

## Problem
There are some robots and factories on the X-axis. You are given an integer array `robot` where `robot[i]` is the position of the `ith` robot. You are also given a 2D integer array `factory` where `factory[j] = [position_j, limit_j]` indicates that `position_j` is the position of the `jth` factory and that the `jth` factory can repair at most `limit_j` robots.

The position of each robot are unique. The positions of each factory are also unique. Note that a robot can be in the same position as a factory initially.

All the robots are initially broken; they keep moving in one direction. The direction could be negative or the position direction of the X-axis. When a robot reaches a factory that did not reach its limit, the factory repairs the robot, and it stops moving.

At any moment, you can set the initial direction of moving for some robot. Your target is to minimize the total distance traveled by all the robots.

Return the minimum total distance traveled by all the robots. The test case are generated such that all the robots can be repaired.

Note that
- All robots move at the same speed
- If two robots move in the same direction, they will never collide
- If two robots move in opposite directions and they meet at some point, they do not collide. They cross each other
- If a robot passes by a factory that reached its limits, it crosses it as if it does not exist
- If the robot moved from a position `x` to a position `y`, the distance it moved is `|y - x|`.

## Example
```
Input: robot = [0, 4, 6], factory = [[2, 2], [6, 2]]
Output: 4
Explanation: 
- The first robot at position 0 moves to the first factory, takes 2 moves
- The second robot at position 4 moves to the first factory, takes 2 moves
- The third robot at position 6 moves to the second factory, takes 0 moves
```

## Key Idea
We will solve this problem via dynamic programming. Each factory has limit and for a given robot, we can assign to each factory or not. If we decided one robot, we reduce the problem size by 1 and if we have the sub problems answer, then we can reuse it. Thus, we will solve this problem via dynamic programming.

We will sort the robots and factories. Then, when for a given factory, we can assign all robots close to that factory.

We can solve it via top down dp. Given a robot index and factory index, we can
- move to the next factory without assign current robot
- assign robot and all next robots to the current factory

and keep track of the minimum distance we have.

## Complexity Analysis
- Runtime Complexity: O(n * m + l) where l is the average limit for each factory
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)