## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 1319

## Description
There are `n` computers numbered from `0` to `n - 1` connected by ethernet cables `connections` forming a network where `connections[i] = [a_i, b_i]` represents a connection between computers `a_i` and `b_i`. Any computer can reach any other computer directly or indirectly though the network.

You are given an initial computer network `connections`. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make tthem directly connected.

Return the minimum number of times you need to do this in order to make all the computers connected. If it is not possible, return `-1`.

## Example
```
Input: n = 4, connections = [[0, 1], [0, 2], [1, 2]]
Output: 1
Explanation: Remove cable between computer 1 and 2 and place between computers 1 and 3.

Input: n = 6, connections = [[0, 1], [0, 2], [0, 3], [1, 2], [1, 3]]
Output: 2

Input: n = 6, connections = [[0, 1], [0, 2], [0, 3], [1, 2]]
Output: -1
Explanation: There are not enough cables.
```

## Key Idea
Notice if connections.size() == number of edges is less than `n - 1`, then it is not possible to connect all the n components, thus we can return `-1`. Otherwise, it must be a possible ways to connect all the components. We can simply run a DFS or BFS to find out the number of isolated groups of components and `-1` will be the final solution.

## Solution
- [C++](solution.cpp)
