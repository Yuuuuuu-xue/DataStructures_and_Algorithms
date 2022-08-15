# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 489

## Problem
You are controlling a robot that is located somewhere in a room. The room is modeled as an `m x n` binary grid where `0` represents a wall and `1` represents an empty slot.

The robot starts at an unknown location in the room that is guaranteed to be empty, and you do not have access to the grid, but you can move the robot using the given API `Robot`. You are tasked to use th erobot to clean the entire room (i.e. clean every empty cell in the room). THe robot with the four given APIs can move forward, turn left, or turn right. Each turn is `90` degrees. When the robot tries to move into a wall cell, its bumper sensor detects the obstacle, and it stays on the current cell. Design an algorithm too clean the entire room using the following APIs:
```
interface Robot {
  // returns true if next cell is open and robot moves into the cell
  // returns false if next cell is obstacle and robot stays on the current cell
  boolean move();

  // robot will stay on the same cell after calling turnLeft/turnRight
  // each turn will be 90 degrees
  void turnLeft();
  void turnRight();

  // clean the current cell.
  void clean();
}
```
Note that the initial direction of the robot will be facing up. You can assume all four edges of the grid are all surrounded by a wall.

## Key Idea
Notice, when we move into a wall, then we need to backtrack our direction and try other direction. Since we do not know any information about the room, we need to try every possible positions we can reach to. Thus we need to keep track of our position. Assume the robot starting position cell is `(0, 0)`, then update the cell while we are moving to avoid repeat cleaning the same position.

## Solution
- [C++](solution.cpp)