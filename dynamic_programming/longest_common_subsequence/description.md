## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 1143

## Problem
Given two strings `text1` and `text2`, return the length of their longest common subsequence. If there is no common subsequence, return `0`.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

- For example, `"ace"` is a subsequence of `"abcde"`.
A common subsequence of two strings is a subsequence that is common to both strings.

 

## Example
```
Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
```

## Key Idea 
For any two strings `text1` and `text2`, suppose we know the longest common subsequence between the string `text1[:i]` and `text2[:j]`.

Now if:
- `text1[i] == text2[j]`, then the longest common subsequence could be
  - 1 + longest common subsequence of text1[:i] and text2[:j].
  - or two options below
- `text1[i] != text2[j]`, then the longest common subsequence could be 
  - longest common subsequence of text1[:i + 1] and text2[:j]
  - longest common subsequence of text1[:i] and text2[:j + 1]

## Complexity Analysis
- Runtime Complexity: O(nm)
- Space Complexity: O(nm)

## Solution:
- [C++](solution.cpp)