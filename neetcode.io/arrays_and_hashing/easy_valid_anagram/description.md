## LeetCode Problem
Easy 242

## Description
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.
An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


## Example
```
Input: s = "anagram" and t = "nagaram"
Output: true

Input: s = "rat" and t = "car"
Output: false
```

## Basic Idea
Simplest solution is to sort both strings and if they are equal, then it is anagram. However, this solution will take O(n log n) to solve. To achieve O(n), we can use a hashmap that maps the character to it's occurrence. If two hash maps matched, then they are anagram. Alternatively, we can build the map for one string and decrease it's occurrence on the by looping over another string. If all the entry values are 0, then they are the anagram.

## Solution
- [C++](./solution.cpp)