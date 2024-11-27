## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 3243

## Problem
You are given an integer `n` and a 2D integer array `queries`.

There are `n` cities numbered from `0` to `n - 1`. Initially, there is a undirectional road from city `i` to city `i + 1` for all `0 <= i < n - 1`.

`queries[i] = [u_i, v_i]` represents the addition of a new undirectional road from city `u_i` to city `v_i`. After each query, you need to find the length of the shortest path from city `0` to city `n - 1`.

Return an array `answer` where each `i` in the range `[0, queries.length - 1]`, `answer[i]` is the length of the shortest path city `0` to city `n - 1` after processing the first `i + 1` queries.

## Example
```
Input: n = 5, queries = [[2, 4], [0, 2], [0, 4]]
Output: [3, 2, 1]
Explanation:

For the first query:
0 -> 1 -> 2 -> 3 -> 4
          |         |
            ------>
which takes 3 steps.

For the second query:
0 -> 1 -> 2 -> 3 -> 4
|         |         |
  ------>   ------>
which takes 2 steps.

For the third query:
0 -> 1 -> 2 -> 3 -> 4
|         |         |
  ------>   ------>
|                   |
  ---------------->
which takes 1 step.
```

## Key Idea
We can simply construct the graph, at each step, add the new edge from query.

Then, for each query, we perform a BFS/DFS on the updated graph.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2 * m)
- Space Complexity: O(|V| + |E|) = O(n + m)

## Solution
- [Python](./solution.py)
