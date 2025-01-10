# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 916

## Problem
You are given two string arrays `words1` and `words2`.

A string `b` is a subset of string `a` if every letter in `b` occurs in `a` including multiplicity.
- For example, `"wrr"` is a subset of `"warrior"` but is not a subset of `"world"`

A string `a` from `words1` is universal if for every string `b` in `words2`, `b` is a subset of `a`.

Return an array of all the universal strings in `words1`. You may return the answer in any order.

## Example
```
Input: words1 = ["amazon", "apple", "facebook", "google", "leetcode"], words2 = ["e", "o"]
Output: ["facebook", "google", "leetcode"]
```

## Key Idea
Note, for a word `a` to be universal, we need all words in `words2` to be subset of `a`. This means suppose two words in `words2` are "a" and "aa", then for `a` to be universal, it has to contain at least two `a`s. Thus, we need to loop over `words2` and keep track of max frequency for each letter among all words in `words2`. Then compare it with each word with `word1`.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(1) since we will have a map that maps a character to its frequency, the number of character is bounded by 26

## Solution
- [Python](./solution.py)