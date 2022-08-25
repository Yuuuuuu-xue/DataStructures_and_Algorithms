## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1136 (Premium)

## Description
You are given an integer `n`, which indicates that there are `n` courses labeled from `1` to `n`. You are also given an array `relations` where `relations[i] = [prevCourse_i, nextCourse_i]`, representing a prerequisite relationship between course `prevCourse_i` and course `nextCourse_i`: course `prevCourse_i` has to be taken before course `nextCourse_i`.

In one semester, you can take any number of courses as long as you have taken all the prerequisites in the previous semester for the courses you are taking.

Return the minimum number of semeters needed to take all courses. If there is no way to take all the courses, return `-1`.

## Example
```
Input: n = 3, relations = [[1, 3], [2, 3]]
Output: 2
Explanation: In the first semeter, you can take courses 1 and 2. In the second semester, you can take course 3.

Input: n = 3, relations = [[1, 2], [2, 3], [3, 1]]
Output: -1
Explanation: no course can be studied because they are prerequisites of each other.
```

## Key Idea
We will first construct a graph for this case. An edge from course A to course B represents that we have to take course B first before we take course A. Then at each time, we will take any course that we can take (so all the prerequisites are satisfied) and those courses are the leaves. Then some courses will be avilable on the next round (some non-leaf nodes become leaf). Then this is similar to the Kahn's algorithm of the topological sort.

However, what if we have cycles? We can apply the Kahn's algorithm, at the end, when queue is empty but there are still some nodes we haven't visited, this means there must be a cycle so that every node in the cycle is not a leaf.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n + m)

## Solution
- [C++](solution.cpp)