## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
There are a total of ```numCourses``` courses you have to take, labeled from ```0``` to ```numCourses - 1```. You are given an array ```prerequisities``` where ```prerequisites[i] = [a_i, b_i]``` indicates that you ***must*** take course ```a_i``` before ```b_i```.
Prerequisities can also be ```indirect```. If course ```a``` is a prerequisite of course ```b``` and course ```b``` is a prerequisite of course ```c```, then course ```a``` is a prerequsite of coures ```c```.
You are also given an array ```queries``` where ```queries[j] = [u_j, v_j]```. For the ```jth``` query, you should answer whether course ```u_j``` is a prerequisite of course ```v_j``` or not. Return a boolean array ```answer```, where ```answer[j]``` is the answer of ```jth``` query.

## Example:
```
Input: numCourses = 2, prerequisites = [[1, 0]], queries = [[0, 1], [1, 0]]
Output: [false, true]
Explanation: The pair [1, 0] indicates that you should take course 1 before course 0. Course 0 is not a prerequisite of course 1, but the opposite is true.
```

## General Idea: 
We will use FloydWrashall algorithm to solve this problem. First of all, define a n * n array as dp. Then assign dp[i][j] = 1 if there is a prerequisite (j, i) otherwise infinity = ```float('inf')```. Then after running the FloydWarshall algorithm, i.e. finiding the shorest path for every pair of vertices, we know that if dp[i][j] < ```float('inf')``` then their is a path from i to j meaning that j is a prequisite of i.

## Pseudocode of FloydWarshall Algorithm
```
procedure FloydWarshall(W)
  n := number of rows of W
  D[0] := W
  for k = 1, ..., n do
    Let D[k] be a new n * n matrix
    for i = 1, ..., n do
      for j = 1, ..., n do
        if D[k - 1][i, j] > D[k - 1][i, k] + D[k - 1][k, j] then
          D[k][i, j] = D[k - 1][i, k] + D[k - 1][k, j]
        else
          D[k][i, j] = D[k - 1][i, j]
  return D[n]
```

## Solution:
- [Python Solution](course_schedule_IV.py)
