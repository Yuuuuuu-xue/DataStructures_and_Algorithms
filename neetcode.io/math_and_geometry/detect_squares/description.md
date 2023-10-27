## LeetCode Problem
Medium 2013

## Description
You are given a stream of points on the X-Y plane. Design an algorithm that:
- Adds new points from the stream into a data structure. Duplicate points are allowed and should be treated as different points.
- Given a query point, counts the number of ways to choose three points from the data structure such that the three points and the  query point form an axis-aligned square with positive area.

An axis-aligned square is a square whose edges are all the same length and are either parallel or perpendicular to the x-axis and y-axis. Implement the `DetectSquares` class:
- `DetectSquares()` initializes the object with an empty data structure
- `void add(int[] point)` adds a new point `point = [x, y]` to the data structure
- `int count(int[] point)` counts the number of ways to form axis-aligned squares with point `point = [x, y]` as described above.

## Example
```
DetectSquares detectSquares = new DetectSquares();
detectSquares.add([3, 10]);
detectSquares.add([11, 2]);
detectSquares.add([3, 2]);
detectSquares.count([11, 10]); // return 1
detectSquares.count([14, 8]); // return 0
detectSquares.add([11, 2]); // duplicate point
detectSquares.count([11, 10]); // return 2
```

## Key Idea
Let `m` be a map that maps `pair(int, int)` to its frequency. Then for `add`, we can simply increment the counter.

For `count`, we can simply traverse the map, we will find a point that is different the given point and it's diagonal to the given point. We can find such point by `abs(x2 - x1) == abs(y2 - y1)`. Then if two other points in the map, we can calcualte the product of all three points and add to the output counter.

## Complexity Analysis
- Runtime Complexity:
  - add: O(1)
  - count: O(n)
- Space Complexity: Overall use O(n)

## Solution
- [C++](./solution.cpp)