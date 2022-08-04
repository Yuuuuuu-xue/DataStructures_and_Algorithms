## LeetCode Problem
Medium 3

## Description
Given a string `s`, find the length of the longest substring without repeating characters.

## Example
```
Input: s = "abcabcbb"
Output: 3
Explanation: the answer is "abc"

Input: s = "bbbbb"
Output: 1
Explanation: the answer is "b"
```

## Basic Idea
Let `m` represents a map that maps the character to it's most recent occurrence index. Let `i` represents the starting of the output string index. We will loop over each character `c` and check:
- If m does not have c or m[c] < i:
  - set m[c] to its index
- If m[c] > i, then:
  - update the final output with possible answer curr_i - m[c].
  - Update i to m[c]
  - Update m[c] to curr_i


At the end, we also need to update the final output to size - i.

## Solution
- [C++](./solution.cpp)