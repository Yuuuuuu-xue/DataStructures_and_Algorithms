## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 2097

## Problem
You are givne a 0-indexed 2D integer array `pairs` where `pairs[i] = [start_i, end_i]`. An arrangement of `pairs` is valid if for every index `i` where `1 <= i < pairs.length`, we have `end_{i - 1} == start_i`.

Return any valid arrangement of `pairs`.

Note: the inputs will be generated such that there exists a valid arrangement of `pairs`.

## Example
```
Input: pairs = [[5, 1], [4, 5], [11, 9], [9, 4]]
Output: [[11, 9], [9, 4], [4, 5], [5, 1]]
```

## Key Idea
Note, we can convert this problem into a graph problem.

The node will be the number and edge will be the pair.

Then we can simply perform a graph algorithm but we want to find a path such that it will visit every edge exactly once.

To achieve that, we need to pick a starting node first.

Note for node that out degree > in degree, it will become the starting node because it needs 1 extra edge to move to the next node.

If all nodes have the same out degree == in degree, this means it we can endup with a cycle and thus we can pick any node to be the start node.

Then we can perform a DFS to visit the node.

We could use a DFS with backtrack, when we see a repeated edge and didn't finish the graph, we can pop the edge and backtrack. However, this will lead to O(N * E) and end up with TLE.

However, in this case, we will perform a post order DFS which means when we visit a node, we will visit its neighbor node first, until all the nodes finished, we will visit the curr node.

So the structure will be
```
loop over neighbor node of curr:
  - pop it from curr node children
  - visit it
append curr node to the list
```

Another way to think that we use post order DFS is that if we at node `u`, we want to add `u` to the path, but we have some unvisited nodes (u's neighbor). Thus we need to visit all those nodes first because not all nodes will return back to `u`.

## Complexity Analysis
- Time Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
