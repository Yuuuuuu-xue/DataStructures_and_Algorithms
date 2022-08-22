## LeetCode Question
Medium 1615

## Description
There is an infrastructure of `n` cities with some number of `roads` coneecting these cities. Each `roads[i] = [a_i, b_i]` indicates that there is a bidirectional road between cities `a_i` and `b_i`.

The network rank of two different cities is defined as the total number of directly connected roads to either city. If a orad is directly connected to both cities, it is only counted once.

The maximal network rank of the infrastructure is the maximum network rank of all pairs of different cities.

Given the integer `n` and the array `roads`, return the maximal network rank of the entire infrastructure.

## Example
```
Input: n = 4, roads = [[0, 1], [0, 3], [1, 2], [1, 3]]
Output: 4
Explanation: the network rank of cities 0 and 1 is 4 as there are 4 roads that are connected to either 0 or 1. The road between 0 and 1 is only counted once.
and the graph:

0 -- 1 -- 2
  \  |
     3

Input: n = 5, roads = [[0, 1], [0, 3], [1, 2], [1, 3], [2, 3], [2, 4]]
Output: 5
Explanation: There are 5 roads there are connected to cities 1 or 2
and the graph:

0 -- 1 -- 2
  \  |    |
     3    4
```

## Key Idea
Let `m` be a map that maps the city `i` to a set of its neighbor cities `j`. Then we will traverse though the roads and build the map. Then, simply try each pair of citites to find the maximal rank. Notice, the maximal rank can be calculated as:
- if there is an edge between city `i` and `j`, then `maximal rank = m[i].size() + m[j].size() - 1 (duplicate edge)`
- if there is no edge between city `i` and `j`, then `maximal rank = m[i].size() + m[j].size()`

At the end, return the maximal rank.

## Complexity Analysis
- Time complexity: O(n^2)
- Space complexity: O(n^2)

## Solution
- [C++](solution.cpp)