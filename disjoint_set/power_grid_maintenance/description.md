## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3607

## Problem
You are given an integer `c` representing `c` power stations, each with a unique identifier `id` from `1` to `c` (1-based indexing).

These stations are interconnected via `n` bidirectional cables, represented by a 2D array `connections`, where each element `connections[i] = [u_i, v_i]` indicates a connection between station `u_i` and station `v_i`. Stations that are directly or indirectly connected form a power grid.

Initially, all stations are online (operational).

You are also given a 2D array `queries`, where each query is one of the following two types:
- `[1, x]`: A maintenance check is requested for station `x`. If station `x` is online, it resolves the check is resolved by the operation station with the smallest `id` in the same power grid as `x`. If no operational station exists in that grid, return `-1`.
- `[2, x]`: Station `x` goes offline (i.e. it becomes non-operational)

Return an array of integer representing the results of each query of type `[1, x]` in the order they appear.

Note: the power grid preserves its structure, an offline (non-operational) node remains part of its grid and taking offline does not alter connectivity.

## Example
```
Input: c = 5, connections = [[1, 2], [2, 3], [3, 4], [4, 5]], queries = [[1, 3], [2, 1], [1, 1], [2, 2], [1, 2]]
Output: [3, 2, 3]
```

## Key Idea
From this problem, we can see that it is a graph problem with disconnected graphs. Hence, it may provide a hint to use disjoint set.

We could use a disjoint set to build the stations. Note, we will never update this disjoint set after we build the node.

After we have the disjoint set, we can always call `ds.find(x)` and it returns a number that represents all nodes are in this group. Then, we can cal `ds.find(x)` for every node and maps this component to a list that contains all the station id. Then, we can sort the list to find the smallest available node in the station.

To handle a offline station, we don't want to call `list.remove(x)` as it takes `O(n)` time. Instead, we can simply store a set of offline station ids.

For the first operation, if `x` is not in the offline set, then we return `x` directly. Otherwise, for each node in `m[ds.find(x)]`, pop it if it is in the offline set.

## Complexity Analysis
- Runtime Complexity:
 - O(|e| + n) to build the disjoint set
 - O(n lg n) to loop over each node and sort it.
 - For first operation: O(1)
 - For second operation: O(1)
- Space Complexity: O(n) overall

## Solution:
- [Python](./solution.py)