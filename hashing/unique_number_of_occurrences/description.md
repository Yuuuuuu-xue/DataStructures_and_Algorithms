## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1207

## Problem
Given an array of integers `arr`, return `true` if the number of occurrences of each value in the array is unique or `false` otherwise.

## Example
```
Input: arr = [1, 2, 2, 1, 1, 3]
Output: true

Input: arr = [1, 2]
Output: false
```

## Key Idea
Let `m` be a map that maps the number to its occurrence. Then simply use a hash map to guarantee unique occurrences.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)