# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem

## Problem
You are given a 0-indexed integer array `nums` of even length consiting of an equal number of positive and negative integers.

You should rearrange the elements of `nums` such that the modified array follows the given conditions:
1. Every consecutive pair of integers have opposite signs
2. For all integers with the same sign, the orfder in which they were present in `nums` is preserved
3. The rearranged array begins with a positive integer

Return the modified array after rearraning the elements to satisfy the aforementioned conditions.

## Example:
```
Input: nums = [3, 1, -2, -5, 2, -4]
Output: [3, -2, 1, -5, 2, -4]
```

## Key Idea
We will create a new empty array and update it by two pointers `pos` and `neg`. Then simply loop over the array, if the array is a positive element, then update it to the `pos` and update `pos += 2`. We start with `pos = 0` and `neg = 1`. Same for `neg`. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)