## LeetCode Problem
Medium 973

## Description
Given an array of `points` where `points[i] = [xi, yi]` represents a point on the X-Y plane and an integer `k`, return the `k` cloest points to the origin `(0, 0)`.

The distnace between two points on the X-Y Plane is the Euclidean distance (i.e. `sqrt((x1 - x2)^2 + (y1 + y2)^2)`).

You may return the answer in any order. The answer is guaranteed to be unique.


## Example
```
Input: points = [[1, 3], [-2, 2]], k = 1
Output: [[-2, 2]]

Input [[3, 3], [5, -1], [-2, 4]], k = 2
Output: [[3, 3], [-2, 4]]
Explanation: The answer [[-2, 4], [3, 3]] would also be accepted.
```

## Basic Idea
First of all, given the formula, sqrt will provide a floating number but without the sqrt, it will be integers. Thus we can ignore the sqrt in the given formula. We can build a priority queue with max heap with size `k`. Then the entire max heap will be k cloest points to the origin.

## Complexity Analysis
- Runtime Complexity: O(n * lg k)
- Space Complexity: O(k)

## Solution
- [C++](./solution.cpp)