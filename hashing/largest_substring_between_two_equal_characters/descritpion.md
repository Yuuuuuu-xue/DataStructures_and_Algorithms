## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1624

## Description
Given a string `s`, return the lengfth of the longest substring between two equal characters, excluding the two characters. If there is no such substring, return `-1`.

## Example
```
Input: s = "aa"
Output: 0
Explanation: The optimal substring here is an empty substring between the two 'a's.

Input: s = "abca"
Output: 2

Input: s = "cbzxy"
Output: -1
```

## Key Idea
Let `m` be a map that maps the character to first and last index of this character. Then, simply traverse the map entries and calculate the length.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
