## LeetCode Question
Easy 344

## Description
Write a function that reverses a string. The input string is given as an array of characters `s`. You must do this by modifying the input array in=place with `O(1)` extra memory.

## Example
```
Input: s = ["h", "e", "l", "l", "o"]
Output: s = ["o", "l", "l", "e", "h"]
```

## Key Idea
Let `left` and `right` be two pointers with initial value `0` and `n - 1`. While `left < right`, we swap `s[left]` and `s[right]` then increment `left` and decrement `right`.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)