## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1048

## Problem
You are givne an array of `words` where each word consists of lowercase English letters.

`wordA` is a predecessor of `wordB` if and only if we can insert exactly one letter anywere in `wordA` without changing the order of the other characters to make it equal to `wordB`.

For example `"abc"` is a predecessor of `"abac"` while `"cba"` is not a predecessor of `"bcad"`.

A word chain is a sequence of words `[word1, word2, ..., owrdk]` with `k >= 1`, where `word1` is a `predecessor` of `word2`, `word2` is a predecessor of `word3`, and so on. A single owrd is trivially a word chain with `k == 1`.

Return the length of the longest possible word chain with words chosen from the given list of `words`.

## Example
```
Input: words = ["a", "b", "ba", "bca", "bda", "bdca"]
Output: 4
Explanation: One of the longest word chain is ["a", "ba", "bda", "bdca"]

Input: words = ["xbc", "pcxbcf", "xb", "cxbc", "pcxbc"]
Output: 5
```

## Key Idea
If we sort the input array from smallest length to largest length. Let `dp[word] = longest word chain ending with word`. Then, for each word in words, we can remove each character from the word and construct a `new_word` with length `i - 1`. Then `dp[word] = max(1 + dp[new_word])` if `new_word` exists in `dp`. The min value of `dp[word] = 1` since each word itself can be a chain with length 1.

## Complexity Analysis
- Runtime Complexity: O(n lg n + n * x)
  - O(n lg n) for sorting
  - O(n * x) where x is the longest word
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)