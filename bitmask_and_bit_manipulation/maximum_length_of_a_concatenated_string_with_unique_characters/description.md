## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 1239

## Description
You are given an array of string `arr`. A string `s` is formed by the concatenation of a subsequence of `arr` that has unique characters.

Return the maximum possible length of `s`.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

## Example
```
Input: arr = ["un", "iq", "ue"]
Output: 4
Explanation: All the valid concatenations are:
- ""
- "un"
- "iq"
- "ue"
- "uniq"
- "ique"
Thus the maximum length is 4

Input: ["cha", "r", "act", "ers"]
Output: 6
Explanation: Possible longest valid concatenations are "chaers" ("cha + "ers") and "acters" ("act"" + "ers")

Input: ["abcdefghijklmnopqrstuvwxyz"]
Output: 1
```

## Key Idea
First of all, notice `arr[i]` contains only lowercase English letter, then we can use an integer as a bitmask to represent the characters in the string. Notice we cannot assume if the `arr[i]` contains duplicate letter or not. If so, we simply skip it when consider concatentation. Thus we can convert the `arr` into an array of integer bitmask (if `arr[i]` contains duplicate character, then simply ignore it). Then we can use backtrack to concatenate the strings. At each time, record the maximum length.

## Complexity Analysis
- Time complexity: O(2 ^ n) since there are 2^N possible combinations of strings and we basically try every possible combination.
- Space complexity: O(2 ^ n)

## Solution
- [C++](solution.cpp)