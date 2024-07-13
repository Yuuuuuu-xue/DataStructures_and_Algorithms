## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2751

## Problem
There are `n` 1-indexed robots, each having a position on a line, health, and movement direction.

You are given 0-indexed integer arrays `positions`, `healths`, and a string `directions` (`directions[i]` is either 'L' for left or 'R' for right). All integers in `positions` are unique.

All robots start moving on the line simulataneously at the same speed in their given directions. If two robots ever share the same position while moving, they will collide.

If two robots collide, the robot with lower health is removed from the line, and the health of the other robot decreases by one. The surviving robot continues in the same direction it was going. If both robots have the same health, they are both removed from the line.

Your task is to determine the leath of the robots that survive the collisions, in the same order that the robots were given, i.e. final health of robot 1 (if survived), final health of robot 2 (if survived), and so on. If there are no survivors, return an empty array.

Return an array containing the health of the remaining robots (in the order they were givenin the input), after no further collisions can occur.

Note: the positions may be unsorted.

## Example
```
Input: positions = [, 4, 3, 2, 1], healths = [2, 17, 9, 15, 10], directions = "RRRRR"
Output: [2, 17, 9, 15, 10]

Input: positions = [3, 5, 2, 6], healths = [10, 10, 15, 12], directions = "RLRL"
Output: [14]
Explanation:
- Robot 1 and robot 2 will collide, since same helath, thus they are gone.
- Robot 3 and robot 4 will collide, since robot 3 has higher helath, left with 15 - 1 = 14 health.
```

## Key Idea
We can simply sort the robot by its position form smallest to largest. Then, we can use a stack to solve this problem. We push any robot that moves to the right to the stack. If a robot moves to the left, then if stack is
- empty, this robot left with some health
- stack is not empty, we compare their health and update left over health after collision. Repeat this until at least one robot is gone.

At the end, sort all the robots by its index and return the health list.

## Complexity Analaysis
- The time complexity is O(n lg n)
- The space complexity is O(n)

## Solution
- [Python](./solution.py)