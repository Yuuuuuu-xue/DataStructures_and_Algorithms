# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 58

## Problem
Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

## Example
```
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World"

Input: "    fly me    to the   moon   "
Output: 4
Explanation: The last word is "moon" with length 4
```

## Key Idea
We will iterate from back to front, skip all the spaces until we reach to first non-space character, then move the counter until we reach to a space and return the length.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)