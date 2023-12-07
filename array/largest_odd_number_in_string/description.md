# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1903

## Problem
You are given a string `num`, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of `num`, or an empty string `""` if no odd integer exists.

A substring is a contiguous sequence of characters within a string.

## Example
```
Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

Input: num = "4206"
Output: ""
```

## Key Idea
Note, a number is an odd number if the last digit is odd number. Thus, we can search from the right to left, if we found curr digit is odd, then the substring from 0 to current index `i` is the largest odd number.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [C++](./solution.cpp)
