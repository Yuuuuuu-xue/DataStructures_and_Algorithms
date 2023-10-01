# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 557

## Problem
Given a string `s`, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

## Examples:
```
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Input: s = "God Ding"
Output: "doG gniD"
```

## Basic Idea
We can simply use a stack to solve this problem. When we see a letter, we push it to a stack. When we see a space, we pop everything from stack and push it to the output string (in reverse order).

We can push a space to the input string to guarantee we will pop all the items from stack before returning.

At the end, we pop the last extra space out and return the output string.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)