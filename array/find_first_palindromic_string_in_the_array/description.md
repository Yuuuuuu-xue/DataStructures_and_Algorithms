# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2108

## Problem
Given an array of strings `words`, return the first palindromic string in the array. If there is no such string, return an empty string.

A string is palindromic if it reads the samke forward and backward.

## Example:
```
Input: words = ["abc", "car", "ada", "racecar", "cool"]
Output: "ada"
```

## Key Idea
Simply loop over the string, if it is a palindrome, return it.

## Complexity Analysis
- Runtime Complexity: O(n * m) where m is the longest string
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)