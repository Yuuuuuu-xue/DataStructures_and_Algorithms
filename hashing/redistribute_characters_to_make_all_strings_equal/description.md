## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1897

## Problem
You are given an array of strings `words` (0-indexed).

In one operation, pick two distinct indices `i` and `j`, where `words[i]` is a non-empty string, and move any character from `words[i]` to any position in `words[j]`.

Return `true` if you can make every string in `words` equal using any number of operations, and `false` otherwise.

## Example
```
Input: words = ["abc", "aabc", "bc"]
Output: true
Explanation: Move first `a` in words[1] to the front of words[2] to make every word equals to `abc`.

Input: words = ["ab", "a"]
Output: false
```

## Key Idea
For each character `c`, we get its occurrence in all the words. If it can not be evenly distributed, then we can return false. In this case, its `occurrence % len(words) != 0`, then we can return false.

## Complexity Analysis
- Runtime Complexity: O(n * m) where `m` is the longest string in the words
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)