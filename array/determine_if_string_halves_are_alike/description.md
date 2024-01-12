# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1704

## Description
You are given a string `s` of even length. Split this string into two halves of equal lengths, and let `a` be the first half and `b` be the second half.

Two strings are alike if they have the same number of vowels (`a`, `e`, `i`, `o`, `u`, `A`, `E`, `I`, `O`, `U`). Notice that `s` contains uppercase and lowercase letters.

Return `true` if `a` and `b` are alike. Otherwise return `false`.

## Example
```
Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok", a has 1 vowel and b has 1 vowel. Therefore, they are alike.
```

## Key Idea
Simply split the string into half and count the vowel. If they are the same, then return `true` otherwise `false`.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
