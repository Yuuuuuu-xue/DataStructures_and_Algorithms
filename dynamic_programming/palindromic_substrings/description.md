## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 647

## Problem
Given a string ```s```, return the number of paliondromic substrings in it.

A string is a palindrome when it reads the same backward as forward. 

A substring is a contiguous sequence of characters within the string.

## Example
```
Input s = "abc"
Output: 3
Explnation: Three palindromic strings: "a", "b", "c".

Inptut s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa"
```

## Key Idea 
Note given a string of length i. It is palindrome if s[0] == s[i-1] and s[1:i-1] is a palindrome + number of paliondromic substrings of string of length i - 1. Thus, let dp[i] represents the number of palindromic strings of length i. Thus dp[i] = dp[i - 1] + number of palindromic strings of length i. We can use a hashmap to keep track of palindrome strings that we have visited before. Thus for a given string s of length i, we can check if s[0] == s[i-1] and also s[1:i-1] is in the hashset or not to verify if s is a palindrome or not.

## Solution:
- [Java Solution](palindromic_substrings.java)