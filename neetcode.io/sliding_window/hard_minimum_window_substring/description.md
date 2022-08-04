## LeetCode Problem
Hard 76

## Description
Given two strings `s` and `t` of lengths `m` and `n` respectively, return the minimum window substring of `s` such that every character in `t` (including duplicates) is included in the window. If there is no such substring, return the empty string, `""`.

## Example
```
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" incldues 'A', 'B', and 'C' from string t.

Input: s = "a", t = "a"
Output: "a"

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window. SInce the largest window of s only has one 'a', return empty string.
```

## Basic Idea
We will use a sliding window to solve this problem where the window size is s1.size(). Note this question is similar to the permutation in string. In this case, we will build a map that maps the character in t to it's occurrence and let `numMatched` be number of matched in the string. Then we have a two pointers, `i` and `j` for the sliding window. At each time, we increment `j` and check if `numMatched == t.size()`,  if so then we found a window that we will increment `i` as much as we can and the `numMatched` stays same so to get a minimum window and update the final solution.

## Solution
- [C++](./solution.cpp)