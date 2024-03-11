## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 791

## Problem
You are given two strings `order` and `s`. All the characters of `order` are unique and were sorted in some custom order previously.

PRemute the chatacters of `s` so that they match the order that `order` was sorted. More specifically, if a character `x` occurs beftore a character `y` in `order`, then `x` should occurb efore `y` in the premuted string.

Return any premutation of `s` that satisfies this property.

## Example
```
Input: order = "cba", s = "abcd"
Output: "cbad"
```

## Key Idea
Let `m` be the map that maps each character in `s` to its occurrence. Then loop over `order`, for each character, if that is in `m`, then append to the permuted string. At the end, join the rest of characters in `m` to the end of the `s`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
