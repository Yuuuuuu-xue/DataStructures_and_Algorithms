## LeetCode Problem
Medium 567

## Description
Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1` or `false` otherwise.
In other words, return `true` if one of `s1`'s permutation is the substring of `s2`.

## Example
```
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 "ba"

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
```

## Basic Idea
We will use a sliding window to solve this problem where the window size is s1.size(). First of all, since any permutation works, we can simply build a map that maps each character to occurrence. Let `numMatched = 0` represents the number of characters matched in the sliding window. Then we will build the first sliding window and update this map. If each character in the window such that the map has an entry with a value > 0, then we decrement it by 1 and increment numMatched by 1. Then if numMatched is same as s1.size(), we return True otherwise we will move this window by 1 unit. So remove the first entry and add a next entry into the window, update the map and numMatched necessary, repeat this process. At the end, return false since none of sliding window has a match.

## Solution
- [C++](./solution.cpp)