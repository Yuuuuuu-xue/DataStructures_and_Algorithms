## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 210

## Description
There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourse - 1`. You are given an array `prerequisites` where `prerequisites[i] = [a_i, b_i]` indicates that you must take course `b_i` first if you want to take course `a_i`.
- For example, the pair `[0, 1]` indicates that to take course `0` you have to first take course `1`.
Return the ordering of courses you should take to finish all courses. If there are many valid answers, return any of them. If it is impossible to finish all courses, return an empty array.

## Example:
```
Input: numCourses = 2, prerequisites = [[1, 0]]
Output: [0, 1]
Explanation: There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0, 1]

Input: numCourses = 4, prerequisites =[[1, 0], [2, 0], [3, 1], [3, 2]]
Output: [0, 2, 1, 3]
Explanation: There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. So the correct course order is [0, 1, 2, 3]. Another correct ordering is [0, 2, 1, 3].
```

## Key Idea
Notice, it is impossible to finish all the courses only if the graph contains a cycle. And the order to finish which course does not matter. For instance, if we have [1, 0] and [3, 4], then we can either take courses in the order `[0, 1, 4, 3]` or `[4, 3, 0, 1]` or other possible ways. Then this is perfect example for the Topological sort.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)