## Floyd Warshall's Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1334

## Problem
There are `n` cities numbered from `0` to `n - 1`. Given the array `edges` where `edges[i] = [from_i, to_i, weight_i]` represents a bidirectional and weighted edge between cities `from_i` and `to_i` and given the integer `distanceThreshold`.

Return the city with the smallest number of cities that are reachable through some path and whose distance is at most `distanceThreshold`, if there are multiple such cities, return the city with the greatest number.

Notice that the distance of a path connecting cities i and j is equal to the sum of the edges' weights along that path.

## Example:
```
Input: n = 4, edges = [[0, 1, 3], [1, 2, 1], [1, 3, 4], [2, 3, 1]], distanceThreshold = 4
Output: 4
```

## Key Idea
For each city, if we know the shorest distance from current city to all other city, then we can count the number of city such that the distance is `<= distanceThreshold`. Then we keep track of the city with min number.

To get such information, we need to know the shorest distance between every pair of cities and thus Floyd Warshall's algorithm is the perfect solution here.

## Complexity Analysis
- Runtime Complexity: O(n ^ 3)
- Space Complexity: O(n ^ 2)

## Solution
- [Python](./solution.py)
