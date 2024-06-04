## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 409

## Problem
Given a string `s` which consists of lowercase or uppercase letters returnthe length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, `"Aa"` is not considered a palindrome.

## Example
```
Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
```

## Key Idea
Simply use a map to keep track the character with its counter. Then all the even occurrence characters can be added to the palindrome. For odd occurrence, we can add all the `x - 1` occurrence characters to the palindrome. In addition, we can add at most one character as the odd character in the center of the palindrome.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
