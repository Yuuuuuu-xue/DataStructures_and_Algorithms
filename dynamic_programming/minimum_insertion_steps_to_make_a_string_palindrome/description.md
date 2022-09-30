## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1312

## Problem
Given a string `s`. In one step you can insert any character at any index of the string.

Return the minimum number of steps to make `s` palindrome.

A Palindrome String is one that reads the same backward as well as forward.

## Example
```
Input: s = "zzazz"
Output: 0
Explanation: The string "zzazz" is already palindrome we don't need any insertions.

Input: s = "mbadm"
Output: 2
Explanation: String can be "mbdadbm" or "mdbabdm".

Input: s = "leetcode"
Output: 5
Explanation: Inserting 5 characters the string becomes "leetcodocteel".
```

## Key Idea
Usually for palindrome question, we check if the end if same or not and divide into few cases.

Thus, let `i = 0` and `j = len - 1` initially, we check if
- `s[i] == s[j]`, if so, then the optimal solution could be optimal solution of i += 1 and j -= 1
- `s[i] != s[j]`, then the optimal solution of
  - i += 1 and j
  - i and j += 1

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n ^ 2)

## Solution
- [C++](solution.cpp)