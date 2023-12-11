# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1287

## Problem
Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

## Example
```
Input: arr = [1, 2, 2, 6, 6, 6, 6, 7, 10]
Output: 6

Input: arr = [1, 1]
Output: 1
```

## Key Idea
Since array is sorted, simply count the number of occurrence. If >= length / 4, then return it.

## Solution
- [C++](solution.cpp)