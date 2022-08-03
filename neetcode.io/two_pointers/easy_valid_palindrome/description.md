## LeetCode Problem
Easy 125

## Description
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers. Given a string `s`, return `true` if it is a palindrome, or `false` otherwise. 

## Example
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

## Basic Idea
Simply use two pointers, one left and one right. While left < right, we increment left pointer until first alphanumeric character and decrement right pointer until first alphanumeric character. If they are the same, then repeat. If not, return false.

## Solution
- [C++](./solution.cpp)