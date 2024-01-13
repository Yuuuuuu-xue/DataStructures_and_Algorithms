## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1347

## Problem
You are given two strings of the same length `s` and `t`. In one step you can choose any character of `t` and replace it with another character.

Return the minimum number of steps to make `t` an anagram of `s`.

AN anagram of a string is a string that contains the same characters with a different (or the same) ordering.

## Example
```
Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace first 'a' in t with 'b', t = "bba" which is anagram of s.
```

## Key Idea
Simply let `m` be a map that maps the character to its occurrence in `s`. Then in `t`, decrement the occurrence for character in `t`, if the value is `0` before decrement, then increment the output since we need to replace it with character.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
