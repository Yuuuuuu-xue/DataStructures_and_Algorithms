## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 2045

## Problem
A city is represented as a bi-directional connected graph with `n` vertices where each vertex is labeled from `1` to `n` (inclusive). The edges in the graph are represented as a 2D integer array `edges`, where each `edges[i] = [u_i, v_i]` denotes a bi-directional edge between vertex `u_i` and vertex `v_i`. Every vertex pair is conncted by at most one edge, and no vertex has an edge to itself. The time taken to traverse any edge is `time` minutes.

Each vertex has a traffic signal which changes its color from green to red and vice versa every `change` minutes. All signals change at the same time. You can enter a vertex at any time, but can leave a vertex only when the signal is green. You cannot wait at a vertex if the signal is green.

The second minimum value is defined as the smallest value strictly larger than the minimum value.
- For example the second minimum value of `[2, 3, 4]` is `3`, and the second minimum value of `[2, 2, 4]` is `4`.

Given `n`, `edges`, `time`, and `change`, return the second minimum time it will take to go from vertex `1` to `n`.

Notes:
- You can go through any vertex any number of times, including `1` and `n`.
- You can assume that when the journey starts, all signals have just turned green.

## Example
```
Input: n = 5, edges = [[1, 2], [1, 3], [1, 4], [3, 4], [4, 5]], time = 3, change = 5
Output: 13
Explanation:
- The path 1 -> 4 -> 5 takes 3 + 3 = 6 min which is the minimum
- The path 1 -> 3 -> 4 -> 5 takes 3 + 3 + 4 + 3 = 13 min
    - We start at 3 + 3 = 6 min and at 4, since 6 > 5 and light is red. Then we wait 4 minutes to let the light to change to green.
```

## Key Idea
An adjacent pair `[u_i, v_i]` means `u_i` is `v_i`'s neighbor and vice versa. It is guaranteed that the graph is connected and thus a simple DFS will work.

## Complexity Analysis
- Runtime Complexity: O(|V| + |E|)
- Space Complexity: O(|V| + |E|)

## Solution
- [Python](./solution.py)
