## Rolling Hash
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2223

## Problem
You are building a string `s` of length `n` one character at a time, prepending each new character to the front of the string. The strings are labeled from `1` to `n`, where the string with length `i` is labeled `s_i`.
- For example, for `s = "abaca"`, `s_1 == "ca`, `s_3 == "aca"`, etc.

The score of `s_i` is the length of the longest common prefix between `s_i` and `s_n`. (Note that `s == s_n`)

Given the final string `s`, return the sum of the score of every `s_i`.

## Example
```
Input: s = "babab"
Output: 9
Explanation:
- For s_1 == "b", the longest common prefix is "b" which has a score of 1.
- For s_2 == "ab", there is no common prefix so the score is 0
- For s_3 == "bab", the longest common prefix is "bab" which has a score of 3
- For s_4 = "abab", there is no common prefix so the score is 0
- For s_5 = "babab", the longest common prefix is "babab" which has a score 5
The sum of the score is 1 + 0 + 3 + 0 + 5 = 9, so we return 9
```

## Key Idea
If we compare two strings are the same, if we compare every characters (prefix and suffix) then we will end up with TLE.

Hence, we need to compare it with some hashed value and use rolling hash to solve this problem.

Given any prefix, we will store it in the an array of hashed of a prefix value. Then, for each suffix starting index `i`, we fix the index `i` and use binary search to search the ending index `j`.

The key question is that how do we know if they are the same:
- Substring from [i, mid]
- Substring from [0, mid - i]

The key concept is that `hash(s[i:j]) = (vals[j] - valus[i] * power[j - i]) % mod`

This is because 
- `vals[j] = s[0] * p^(j - 1) + s[1] * p^(j - 2) + ... + s[i - 1] * p^(j - i) + s[i] * p^(j - i - 1) + ... + s[j - 1] * p^(0)`
- `vals[i] * p^(j - i) = s[0] * p^(j - 1) + ... + s[i - 1] * p^(j - i)`
- Subtracing removes the first i characters, leaving hash s[i:j]

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)