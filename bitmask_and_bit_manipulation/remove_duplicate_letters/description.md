## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 316, same as Medium 1081

## Problem
Given a string `s`, remove duplicate letters so that every letters appears once and only once. You must make sure your result is the smallest in lexicographical order among all the possible results.

You can assume `s` consists of lowercase English letters.

## Examples:
```
Input: s = "bcabc"
Output: "abc"

Input: s = "cbacdcbc"
Output: "acdb"
```

## Key Idea
The key idea of this question is that when we encounter a character `c` and we compare to the characters in the output string. If `c` is smaller than a character `x` in the output string and we still have at least one `x` later on. We can remove it from the output string.

Thus, we need to have a vector that keeps track of the number of times that a `c` occurs in a given string and also need a boolean vector or a bitmask to keep track of this number that we previous used or not.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(26)

## Solution
- [C++](./solution.cpp)