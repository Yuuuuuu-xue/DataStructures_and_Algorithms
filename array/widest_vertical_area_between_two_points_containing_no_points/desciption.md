# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1637

## Problem
Given `n` `points` on a 2D plane where `points[i] = [x_i, y_i]`. Return the wiodest vertical area between two points such that no points are inside the area.

A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e. infinite height). The widest vertical area is the one with the maximum width.

Note that points on the edge of a vertical area are not considered included in the area.

## Example
```
Input: points = [[8, 7], [9, 9], [7, 4], [9, 7]]
Output: 1
```

## Key Idea
We can simply ignore y since we want to know the maximum width between two x points such that two points do have have another point inside it. Thus, simply sort it by x and then calculate the maximum width between two consecutive points.

## Complexity Analysis
- Runtime Complexity is O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)