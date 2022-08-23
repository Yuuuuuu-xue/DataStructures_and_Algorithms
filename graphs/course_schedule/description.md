## Graph 
Click [here](../notes.md) to go back to the notes page.

## Problem
There are a total of ***numCourses*** courses you have to take, labeled from ***0*** to ***numCourses - 1***. You are given an array ***prerequistes*** where ***prerequistes[i] = [$a_i$, $b_i$] indicates you ***must*** take course $b_i$ first if you want to take courses $a_i$.

Return ***true*** if you can finish all courses. Otherwise, return ***false***.

## Example
```
Input: numCourses = 2, prerequisites = [[1, 0]]
Output: true
Explanation: there are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.
```

## Example
```
Input: numCourses = 2, prerequisites = [[1, 0], [0, 1]]
Output: false
Explanation: there are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
```

## General Idea
If we have to finish course 0 before we can take course 1.

And if we have to finish course 1 before we can take course 2.

Add ...

And if we have to finish course k before we can take course k - 1.

And if we have to finish course 0 before we can take course k.

Then, notice if we have a cycle, then it is not possible to schedule to courses. And therefore, we can use DFS to detect if there is a cylce or not.

## Solution:
- [Python Solution](./course_schedule.py)
- [C++](solution.cpp)