# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3195

## Problem
You are given a 2D binary array `grid`. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the 1's in `grid` lie inside this rectangle.

Return the minimum possible area of the rectangle. 

## Example
```
Input: grid = 
[[0, 1, 0],
 [1, 0, 1]]
Output: 6
Explanation: We need the rectangle that has a height of 2 and a width of 3 which has the rea of 2 * 3 = 6.

Input: grid = 
[[1, 0],
 [0, 0]]
Output: 1
```

## Key Idea
We can simply find the smallest `i` (horizontal) that has `1` and smallest `j` (vertical) that contains `1`. Then largest `x` (horizontal) that has `1` and largest `y` (vertical) that contaisn `1`. Then compute the area.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)