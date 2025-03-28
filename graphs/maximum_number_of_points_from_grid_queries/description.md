## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2503

## Problem
You are given an `m x n` integer matrix `grid` and an array `queries` of size `k`.

Find an array `answer` of size `k` such that for each integer `queries[i]` you start in the top left cell of the matrix and repeat the following process:
- If `queries[i]` is strictly greater than the value of the current cell that you are in, then you get one point if it is your first time visiting the cell, and you can move to any adjacent cell in all `4` directions: up, down, left, and right.
- Otherwise, you do not get any points, and you end this process.

After the process, `answer[i]` is the maximum number of points you can get. Note that for each query you are allowed to visit the same cell multiple times.

Return the resulting array `answer`.

## Example
```
Input: grid =
[[1, 2, 3],
 [2, 5, 7],
 [3, 5, 1]], queries = [5, 6, 2]
Output: [5, 8, 1]
```

## Key Idea
To find the number of points of queries[i], we can simply perform a BFS.

However, if we perform a BFS for each query, the overall runtime complexity will be O(n^2 * k).

Note, the key idea of this solution is that if queries[i] < queries[j], then, the number of points of queries[j] >= number of points of queries[i].

Thus, we need to sort the queries and then perform BFS only one time.

There is an edge case where if the given input list is really long and contains many duplicates and if we sort the list, we will TLE. We can do it by using a map that maps the elements to a list of index. Then we can sort the unique key.

## Complexity Analysis
- Runtime Complexity: O(n * m + k + k lg k)
- Space Complexity: O(n * m + k)

## Solution
- [Python Solution](./solution.py)
- [Python Optimizied Solution](./optimized_solution.py)
