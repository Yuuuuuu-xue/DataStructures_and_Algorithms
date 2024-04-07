## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2065

## Problem
There is an undirected graph wiht `n` nodes numbered from `0` to `n - 1` (inclusive). You are given a 0-indexed integer array `values` where `values[i]` is the value of the `ith` node. You are also given a `0-indexed` 2D integer array `edges `, where each `edges[j] = [u_j, v_j, time_j]` indicates thatthere is an undirected edge between the node `u_j` and `v_j` and it takes `time_j` seconds to travel between the two nodes. Finally, you are given an integer `maxTime`.

A valid path in the graph is any path that starts at node `0`, ends at node `0`, and takes at most `maxTime` seconds to complete. You may visit the same node multiple times. The quality of a valid path is the sum of the alues of the unique nodes visited in the path (each node's value is added at most once to the sum).

Return the maximum quality of a valid path.

Note: there are at most four edges connected to each node.

Note: you can assume the number of nodes is at most 1000.

## Example:
```
Inpput: values = [0, 32, 10, 43], edges = [[0, 1, 10], [1, 2, 15], [0, 3, 10]], maxTime = 49
Output: 75
Explanation: One possible path is 0 -> 1 -> 0 -> 3 -> 0, the total time taken is 10 + 10 + 10 + 10 = 40 <= 49.
```

## Key Idea
Since the number of nodes is at most 1000 and there is at most four edges connected to each node, then maybe we can try every single possible paths. This provides a hint to use DFS but since we want to try every single possible path, we will use backtracking to solve this problem.

We will have a map that maps the number of visited nodes to its occurrence, when we first time visit the node, we increment the current value and when it's the last node in visited nodes when backtracking, then we decrement the current value. When the node is `0`, we update the maximum possible value.

## Complexity Analysis
- Runtime Complexity: Since we will loop over the neighbors and each recursive call has 4 each recursive calls since we know that each node has at most 4 neighbors, thus the overall runtime for the recursive call is `O(4 ^ k)` where `k` is the maximum depth of the recursion. It also takes the time to build the graph which takes `O(|E|)` where it is bounded by `n` since each node has at most `4` edges. Thus overall runtime is `O(4 ^ k + n)`
- Space Complexity: O(n)

## Solution
- [Python](solution.py)