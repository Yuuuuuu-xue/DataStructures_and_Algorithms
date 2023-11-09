# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1759

## Problem
Given a string `s`, return the number of homogenous substrings of `s`. Since the answer may be too large, return it modulo `10**9 + 7`. A string is homogenous if all the characters of the string are the same.

## Example
```
Input: s = "abbcccaa"
Output: 13
Explanation:
- "a" appears 3 times
- "aa" appears 1 time
- "b" appears 2 times
- "bb" appears 1 time
- "c" appears 3 times
- "cc" appears 2 times
- "ccc" appears 1 time

3 + 1 + 2 + 1 + 3 + 2 + 1 = 13

Input: s = "xy"
Output: 2
Explanation:
- "x" appears 1 time
- "y" appears 1 time
```

## Key Idea
Simply keep a sliding window of the same characters, every time we expand the window size by 1, we increment window size to the output counter

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)