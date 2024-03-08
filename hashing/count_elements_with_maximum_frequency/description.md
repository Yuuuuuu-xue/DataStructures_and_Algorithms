## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3005

## Problem
You are given an array `nums` consisting of positive integers.

Return the total frequencies of elements in `nums` such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.

## Example
```
Input: nums = [1,2,2,3,1,4]
Output: 4
Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.
```

## Key Idea
Simply use a hashmap map the element to its frequencies.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
