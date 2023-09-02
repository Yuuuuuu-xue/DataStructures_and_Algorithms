## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 2707

## Problem
You are given a 0-indexed string `s` and a dictionary of words `dictionary`. You have to break `s` into one or more non-overlapping substrings such that each substring is present in `dictionary`. THere may be some extra characters in `s` which are not present in any of the substrings.

Return the minimum number of extra characters left over if you break up `s` optimally.

## Example
```
Input: s = "leetscode", dictionary = ["leet", "code", "leetcode"]
Output: 1
Explanation: We can break s into substrings: "leet" and "code" left with 1 extra character 's'

Input: s = "sayhelloworld", dictionary = ["hello", "world"]
Output: 3
Explanation: left with 's', 'a', and 'y'
```

## Key Idea
We can use Dynamic Programming to solve this problem. Let `dp[i]` be the minimuim extra characters to break `s[:i]` with `dictionary`. Then we know
- `dp[0] = 0` since empty string
- for `i >= 1`, `dp[i]` = 
  - `1 + dp[i - 1]` since current character will be the extra character
  - `dp[i - k]` where `s[k:i]` is a word in the dictionary

We may need to loop over the dictionary to check if the word exists in the dictionary or we can build a `Trie` for the reverse order (since we start looking from the back `i`, `i - 1`, ...).

## Complexity Analysis
- Runtime Complexity: O(n * n + m * j) where m = len(dictionary) and j = max length of word in dictionary
- Space Complexity: O(n + m * j)

## Solution:
- [C++](./solution.cpp)