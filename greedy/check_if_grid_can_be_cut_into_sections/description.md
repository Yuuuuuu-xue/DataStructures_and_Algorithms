## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3394

## Problem
You are given an integer `n` representing the dimensions of an `n x n` grid, with the origin at the bottom-left corner of the grid. You are also given a 2D array of coordinates `rectangles`, where `rectangles[i]` is in the form `[start_x, start_y, end_x, end_y]`, representing a rectangle on the grid. Each rectangle is defined as follows:
- `(start_x, start_y)`: the bottom-left corner of the rectangle
- `(end_x, end_y)`: the top-right corner of the rectangle

Note that the rectangles do not overlap. Your task is to determine if it is possible to make either two horizontal or two vertical cuts on the grid such that:
- Each of the three resulting sections formed by the cuts contains at least one rectangle.
- Every rectangle belongs to exactly one section.

Return `true` if such cuts can be made; otherwise, return `false`.

## Example
```
Input: n = 5, rectangles = [[1, 0, 5, 2], [0, 2, 2, 4], [3, 2, 5, 3], [0, 4, 4,5]]
Output: true
Explanation: 3 horizontal cuts at y = 2 and y = 4.
```

## Key Idea
We can solve this problem with greedy approach. We sort the rectangles by x-axis or y-axis based on horizontal or vertical cut.

Then whenever we can make a cut, we cut. When we make a cut, we check the overlap rectangles and determine the next possible cut. If we make two cuts and there is at least a rectangle in region and we return true.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)