## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 815

## Problem
You are given an array `routes` representing bus routes where `routes[i]` is a bus route that the `ith` bus repeats forever.

For example, if `routes[0] = [1, 5, 7]` this means the `0th` hbus travels in the sequence `1 -> 5 -> 7 -> 1 -> 5 -> 7 -> ...` forever.

You will start at the bus stop `source` (You are not on any bus intiially), and you want to go to the bus stop `target`. You can travel between bus stops by buses only.

Return the least number of buses you must take to travel from `source` to `target`. Return `-1` if it is not possible.
 
## Example
```
Input: routes = [[1, 2, 7], [3, 6, 7]], source = 1, target = 6
Output: 2
Explanation: The best strategy is take the first bus to the bus stop 7, then take the second bus to the bus stop 6.
```

## Key Idea
Let's build a graph that maps the bus stop to a list of bus that can reach to this bus stop.

Then we can simply start searching at the bus stop `source` and given `bus`, we can use `routes` to find all the possible bus stop that we can reach to. Simply start using `bfs` to search if we can reach from `source` to `target`.

Instead of a set of seen stop, we also need a set of `bus` that visit. So we don't need to visit the same bus again. Simply use a bfs to search level by level and return the level number.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)