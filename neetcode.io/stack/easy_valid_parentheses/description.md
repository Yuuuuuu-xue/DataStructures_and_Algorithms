## LeetCode Problem
Easy 20

## Description
Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, `']'`, determine if the input string is valid. An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.

## Example
```
Input: s = "()"
Output: true

Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false
```

## Basic Idea
Simply use a stack, when we see an open bracket, we push it into the stack and whenever we see a close bracket, if the stack is empty, return false. If stack is not empty, pop an item out and if two do not match, then return false. At the end, return true if stack is empty.

## Solution
- [C++](./solution.cpp)