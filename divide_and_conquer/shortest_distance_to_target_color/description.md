## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1182 (Premium)

## Description
You are given an array `colors`, in which there are three colors: `1`, `2`, and `3`. You are also given some queries. Each query consists of two itnegers `i` and `c`, return the shortest distance between the givne index `i` and the target color `c`. If there is no solution return `-1`.

## Example
```
Input: colors = [1, 1, 2, 1, 3, 2, 2, 3, 3], queries = [[1, 3], [2, 2], [6, 1]]
Output: [3, 0, 3]
Explanation:
- the nearest 3 from index 1 is at index 4 (3 steps away).
- the nearest 2 from index 2 is at index 2 itself (0 steps away).
- the nearest 1 from index 6 is at index 3 (3 steps away).

Input: colors = [1, 2], queries = [[0, 3]]
Output: [-1]
Explanation: There is no 3 in the array.
```

## Basic Idea
Note for this question, we can simply build a three 1-D array that stores the distance of the same color nearest to the current index. Then simply loop over the queries and return it. However, it is interesting that this question can be solved by binary search. First of all, we will build a hashmap that maps the color to a list of index that has this color. When we build the map, we can guarnatee that each list of index is sorted since we loop i from 0 to n. Then we can loop over the queries, check if
- If color does not exist in the map, then return -1
- If color exists in the map, then this array is not empty. We will use binary search to find the lower bound of the index.
    - If previous iterator of the lower bound exists, then compare two of them and return the minimum distance
    - If previous iterator not exists, return the distance between lower bound and current index 

## Solution
- [C++](./solution.cpp)