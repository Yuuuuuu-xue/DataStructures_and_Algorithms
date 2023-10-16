## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Easy 119

## Problem
Given an integer ```rowIndex```, return the ```rowIndex th``` (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown.

## Key Idea
We will use dynamic programming to solve this problem. Let dp initially be [1, 1] and represents the ith row of the Pascal's triangle. We will loop from 1 to i, and pop all the elements from dp and construct the next level by using the result of previous calculation. We will use a deque data structure so we can pop from left and append from right to achieve O(n) space complexity and not use a table (consturct entire Pascal's triangle) with O(n^2) space complexity.

## Solution
- [Java Solution](pascal_triangle_II.java)
- [C++](./solution.cpp)