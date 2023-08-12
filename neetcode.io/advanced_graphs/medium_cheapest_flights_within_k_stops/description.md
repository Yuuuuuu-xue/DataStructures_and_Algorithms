## LeetCode Problem
Medium 787

## Description
There are `n` cities connected by some number of flights, You are given an array `flights` where `flights[i] = [from_i, to_i, price_i]` indicates that there is a flight from city `from_i` to city `to_i` with cost `price_i`.

You are also given three integers `src`, `dts`, and `k`, return the cheapest price from `src` to `dst` with at most `k` stops. If there is no such route, return `-1`.
 
## Example
```
Input: n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1
Output: 700
```

## Basic Idea
The idea is to use BFS with priority queue. The priority will be the current price. We will push a list of integers contain three items `[currPrice, currNode, x]`. At each iteration, if we reach to the end node, we can stop it and return the price. When reach to level `k` (i.e. `x >= k`). we can stop and return `-1` since it is not possible to reach to the end. Since the price `> 0`, there is no need to visit the duplicate nodes when there is a higher price, but we can visit the same node again with cheaper price. Thus, we can use a map to keep track the minimum price, if a node does not exist in the map or the price is lower in the map, then we can visit the node. Note, if `k` is different, then we will visit the same node again since we may arrive some node with cheaper price with many stops and it may not reach to final destination and will block the solution (with a higher price but lower k).

## Complexity Analysis
- Runtime Complexity:
  - O(V + E) to build the graph
  - O((V + E)* lg (V + E)) to perform BFS with priority queue
- Space Complexity:
  - O(V + E)

## Solution
- [C++](./solution.cpp)