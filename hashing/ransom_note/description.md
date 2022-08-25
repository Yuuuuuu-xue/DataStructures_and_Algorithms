## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 383

## Question
Given two strings `ransomNote` and `magazine`, return `true` if `ransomNote` can be constructed by using the letters from `magazine` and `false` otherwise.

Each letter in `magazine` can only be used once in `ransomNote`.

## Example
```
Input: ransomNote = "aa", magazine = "ab"
Output: false

Input: ransomNote = "aa", magazine = "aab"
Output: true
```

## Key Idea
Simply let `m` be a map that maps the letter in magazine to its occurrence. Then iterate over each character in `ransomNote`, if `m[letter] <= 0`, then return false otherwise decrement that letter by 1. 

## Complexity Analysis
- Runtime Complexity: O(n + m) where n = ransomNote.size() and m = magazine.size()
- Space Complexity: O(m)

## Solution
- [C++](solution.cpp)