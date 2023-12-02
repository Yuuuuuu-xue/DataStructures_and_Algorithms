## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1160

## Description
You are given an array of strings `words` and a string `chars`.

A string is good if it can be formed by characters from chars (each cahracter can only be used once).

Return the sum of lengths of all good strings in words.

## Example
```
Input: words = ["cat", "bt", "hat", "tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6
```

## Key Idea
Let `m` be a map that maps the character to frequency in `chars`. Then simply loop over each word, and use another map to keep track freq of chars and compare it with `m`.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
