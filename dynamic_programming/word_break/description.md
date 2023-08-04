## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 139

## Problem
Given a string `s` and a dictionary of strings `wordDict`, return `true` if `s` can be segmented into a space-separated sequence of one or more dictionary words. Note that the same word in the dictionary may be reused multiple times in the segmentation.

## Example
```
Input: s = "leetcode", wordDict = ["leet", "code"]
Output: true

Input: s = "applepenapple", wordDict = ["apple", "pen"]
Output: true
```

## Key Idea
We will solve this problem by Dynamic Programming. Let `dp[i]` be the `true` if we can break the word `s[:i+1]` with word dictionary. Thus, we know that
- Base case: `dp[0]` is true since it is an empty string
- `dp[len(s)]` is the final solution we want
- `dp[i] = true` if `s[:i+1] = prefix + endWord`, the `endWord` is in the wordDict and we can compute `prefix` by using previous dp result = `dp[i - len(endWord)]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)