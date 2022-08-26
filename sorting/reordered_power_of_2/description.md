## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 869

## Description
You are given an integer `n`. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

Return `true` if and only if we can do this so that the resulting number is a power of two.

## Example
```
Input: n = 1
Output: true

Input: n = 10
Output: false
```

## Key Idea
We will first convert the input number into string then sort it. Then we will generate each all the integer that is a power of two (before exceed the maximum integer), convert to it into string, sort it, and compare it with the input number. If it is the same then we can return True. Note, the maximum power of two before exceeding the maximum limit of integer is `2 ^ 29`.

## Solution
- [C++](solution.cpp)
