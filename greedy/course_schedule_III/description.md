## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## Problem
There are ```n``` different courses numbered from ```1``` to ```n```. You are given an array ```courses``` where ```courses[i] = [$duration_i$ , $lastDay_i$]```. You will start on the ```$1^{st}$``` day and you cannot take two or more courses simulataneously. Return the ***maximum*** number of courses that you can take.

## Example
```
Input: courses = [[100, 200], [200, 1300], [1000, 1250], [2000, 3200]]
Output: 3
Explanation:
There are totally 4 courses, but you can take 3 courses at most:
1. Take the first course, finish at 100th day
2. Take the third course, finish at 1100th day
3. Take the second coures, finish at 1300th day
```

## General Idea
We will use Greedy Algorithm with Heap to solve this problem. We will first sort the input list by their finish time. We will initialize an empty max heap and a variable time = 0. For each duration_i and lastDay_i, we will try to include this course in our schedule and update our time finish this course. Then we will insert the duration into our max heap. If we cannot finish this course before the deadline, then we will pop a course in our heap that required the highest duration and update our time variable. By sorting them by their finish time, it gurantees all the courses in our heap can be taken before current deadline.

## Solution:
- [Python Solution](./course_schedule_III.py)