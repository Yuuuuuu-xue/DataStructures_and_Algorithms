# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 387

## Problem
Given a string `s`, find the first non-repeating character in it and return its index. If it does not exist, return `-1`.

## Example
```
Input: s = "leetcode"
Output: 0

Input: s = "loveleetcode"
Output: 2

Input: s = "aabb"
Output: -1
```

## Key Idea
Let `m` be a map that maps the character to the number of occurrence. Then we can loop over each character in `m` and build the map. At the end, simply loop over each character again, if its occurrence is `1`, then we find the solution. (Since we loop over `i` from 0 to n - 1).

## Solution
- [C++](./solution.cpp)