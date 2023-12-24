# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1758

## Problem
You are given a string `s` consisting only of the characters `'0'` and `'1'`. In one operation, you can change nay `'0'` to `'1'` or vice versa.

The string is called alternating if no two adjacent characters are equal. For example, the string `"010"` is alternating while the string `"0100"` is not.

Return the minimum number of operations needed toi make `s` alternating.

## Example
```
Input: s = "0100"
Output: 1
Explanation: change last character to '1', s will be "0101", which is alternating.

Input: s = "10"
Output: 0

Input: s = "1111"
Output: 2
Explanation: either "1010" or "0101"
```

## Key Idea
There is only two possibilities, either begin with 0 or begin with 1, then simply traverse the array and count the number of operations needed.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)