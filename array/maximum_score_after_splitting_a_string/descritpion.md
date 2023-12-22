# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1422

## Problem
Given a string `s` of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.

## Example
```
Input: s = "011101"
Output: 5
Explanation: all possinle ways of splitting s into two non-empty substrings are:
- left = "0", right = "11101", score = 1 + 4 = 5
- left = "01", right = "1101", score = 1 + 3 = 4
- left = "011", right = "101", score = 1 + 2 = 3
- left = "0111", right = "01", score = 1 + 1 = 2
- left = "01110", right = "1", score = 2 + 1 = 3
```

## Key Idea
Simply loop over the array once to get the total number of zeros. Then loop it again to get the current number of ones, and thus we know the number of ones in the other substring.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)