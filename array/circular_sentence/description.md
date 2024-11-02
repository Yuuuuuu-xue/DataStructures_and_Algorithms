# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2490

## Problem
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
- For example, "Hello World", "HELLO", "hello world hello world" are all sentences

Words consist of only uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

A sentence is circular if:
- The last character of a word is equal to the first character of next word
- The last character of the last word is equal to the first character of the first word

Given a string `sentence`, return `true` if it is circular. Otherwise, return `false`

## Example:
```
Input: sentence = "leetcode exercises sound delightful"
Output: true
```

## Key Idea
Simple loop over and check

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
