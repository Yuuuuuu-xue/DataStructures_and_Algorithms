## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3623

## Problem
You are given a 2D integer array `points`, where `points[i] = [x_i, y_i]` represents the coordinates of the `ith` point on the Cartesian plane.

A horizontal trapezoid is a convex quadrilateral with at least one pair of horizontal sides (i.e. parallel to the x-axis). Two lines are parallel if and only if they have the same slope.

Return the number of unique horizontal trapezoids that can be formed by choosing any four distinct points from `points`.

Since the answer may be very large, return it modulo `10 ** 9 + 7`

## Example
```
Input: points = [[1, 0], [2, 0], [3, 0], [2, 2], [3, 2]]
Output: 3
Explanation:
- [[1, 0], [2, 0], [3, 2], [2, 2]]
- [[2, 0], [3, 0], [3, 2], [2, 2]]
- [[1, 0], [3, 0], [3, 2], [2, 2]]
```

## Key Idea
Note for a horizontal line, two points must have the same y-value.

For a horizontal trapezoid, we must have two points at same y-value and two points at the another same y-value.

Hence, we can simply map the y-value to number of points. Then, we calculate the number of pairs we can form.

Note, the number of pairs we can form with same y is C(n, 2) = n (n - 1) / 2.

Then we simply count the current number of horizontal lines * number of pairs.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
