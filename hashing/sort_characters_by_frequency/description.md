## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 451

## Problem
Given a string `s`, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

## Example
```
Input: s = "tree"
Output: "eert"

Input: s = "cccaaa"
Output: "aaaccc" or "cccaaa"
```

## Key Idea
Let a map that maps character to frequency then build another map that maps frequency to a collection of characters. Then simply loop over largest frequency to smallest frequency and build the output string.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)