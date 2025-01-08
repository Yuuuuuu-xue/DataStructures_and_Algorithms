## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3042

## Problem
You are given a 0-indexed sring array `words`.

Let's define a boolean function `isPrefixAndSuffix` that takes two strings, `str1` and `str2`:
- `isPrefixAndSuffix(str1, str2)` returns `true` if `str1` is both a prefix and a suffix of `str2`, and `false` otherwise

For example, `isPrefixAndSuffix("aba", "ababa")` is `true` because `"aba"` is a prefix of `"ababa"` and also a suffix, but `isPrefixAndSuffix("abc", "abcd")` is `fasle`.

Return an integer denoting the number of index pairs `(i, j)` such that `i < j`, and `isPrefixAndSuffix(words[i], words[j])` is `true`.

## Example
```
Input: words = ["a", "aba", "ababa", "aa"]
Output: 4
Explanation:
- First pair is i = 0 and j = 1
- Second pair is i = 0 and j = 2
- Third pair is i = 0 and j = 3
- Fourth pair is i = 1 and j = 2
```

## Key Idea
Note, to check if something is a prefix/suffix (suffix for reverse), we can use a trie to check it efficiently.

Then, we can loop over the words and insert it to Trie from back to front since we want to find pairs `i < j`.

A Trie node will have a key `(prefix_c, suffix_c)` to represent a prefix character and a suffix character given a index `i`. This way, we can check a word is both a prefix and a suffix efficiently.

A Trie node will contain a value counter, whenever we build the Trie, we will increment the counter for every node along the path. Then, when we traverse the node and reach to last character and still a valid Trie node, this counter will be the number of words with larger index and both prefix + suffix.

## Complexity Analysis
- Runtime Complexity: O(n * m) where m is length of longest word
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)