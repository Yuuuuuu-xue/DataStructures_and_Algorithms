# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given a string `s`, return the length of the longest substring that contains at most two distinct characters.

## Example
```
Input: s = "eceba"
Output: 3
Explanation: The substring is "ece" which its length is 3.

Input: "ccaabbb"
Output: 5
Explanation:  The substring is "aabbb" which its length is 5.
```

## Key Idea
Since we want to find the substring, the obvious choice to solve this question is to use the sliding window. Let `m` be a map that maps the characters to it's occurrence in the sliding window. Let `i` and `j` be two pointers of the window `s[i:j+1]`. Then for each iteration of j from `0` to `n - 1`, we check
- If s[j] is in the window, then increment m[s[j]] by 1.
- If s[j] is not in the window and m.size() <= 1, then set m[s[j]] = 1.
- If s[j] is not in the window and m.size() >= 2, this means the current window already have 2 distinct characters and we need to update i. Notice from i to j - 1, it is valid solution, thus update the final solution with j - 1 - i + 1. And we need to update i as well:
  - while i < j and m.size() >= 2, we decrement m[s[j]] and earse this entry only if it has a value of 0.

## Solution
- [C++](./solution.cpp)