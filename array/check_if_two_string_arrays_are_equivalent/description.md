# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1662

## Problem
Given two string arrays `word1` and `word2`, return `true` if the two arrays represent the same string and `false` otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

## Example:
```
Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
- word1 represents the string "ab" + "c" = "abc"
- word2 represents the string "a" + "bc" = "abc"
```

## Key Idea
We will use two pointers, if the character is the same, then move both pointer. When it reaches to the current word, then move to the next word.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
