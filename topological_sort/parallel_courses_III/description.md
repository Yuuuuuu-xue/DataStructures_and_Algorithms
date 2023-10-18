## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2050

## Description
You are given an integer `n` which indicates that there are `n` courses labeled from `1` to `n`. You are also given a 2D integer array `relations` where `relations[j] = [prevCourse_j, nextCourse_j]` denotes that course `prevCourse_j` has to be completed before course `nextCourse_j` (prerequiste relationship). Furthermore, you are given a 0-indexed integer array `time` where `time[i]` denotes how many months it takes to complete the `(i + 1)th` course.

You must find the minimum number of months needed to complete all the courses following these rules:
- You may start taking a course at any time if the prerequisites are met
- Any number of courses can be taken at the same time

Return the minimum number of months needed to complete all the courses.

Note: the test cases are generated such that it is possible to complete every course (i.e., the graph is a directed acyclic graph).

## Example:
```
Input: n = 3, relations = [[1, 3], [2, 3]], time = [3, 2, 5]
Output: 8
Explanation: You can take course 1 and 2 simultaneously at month 0. COurse 1 takes 3 months and couse 2 takes 2 months to complete respectively. Thus, the earliest time we can start course 3 is at month 3 and total time is 3 + 5 = 8 months.

Input: n = 5, relations = [[1, 5], [2, 5], [3, 5], [3, 4], [4, 5]], time = [1, 2, 3, 4, 5]
Output: 12
```

## Key Idea
Since this graph is a directed acyclic and there is prerequisite between two courses, thus we should think of using topological sort to solve this problem.

The key idea to solve this problem is to find the minimum time required for each course. Then suppose we trying to figure out the minimum time needed for a course `i`, we know that the minimum time = `time[i] + min_time[x] for x in preq_req[i]`. Thus we can define an array `min_time` to keep track the minimum time we need to complete the course.

Now, how to find the course? We can start the course with no pre requiste, once we find such one, we can take this course so all other courses with this course as pre requisite will be removed, so one less pre requisite. Thus, it gives us a hint that we need an inorder map that maps a course to number of pre requiste. So we can start for the course with 0 pre requiste and then update the inorder map since we already finished this pre requisited.

To figure what course to take next, we can simply use bfs to solve it.

Note this question does not explicitly define the topological sorted list but we are following to same order to take the course.

At the end, the maximum of the `min_time` will be the min time to take all courses.

## Complexity Analysis
- Runtime Complexity: O(n + m) where m is the length of the relations
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)