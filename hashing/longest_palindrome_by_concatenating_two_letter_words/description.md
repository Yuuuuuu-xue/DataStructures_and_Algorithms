## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2131

## Problem
You are given an array of strings `words`. Each element of `words` consists of two lowercase English letters.

Create the longest possible palindrome by selecting some elements from `words` and concatenating them in any order. Each element can be selected at most once.

Return the length of the longest palindrome that you can create. If it is impossible to create any palindrome, return `0`.

A palindrome is a string that reads the same forward and backward.

## Example
```
Input: words = ["lc", "cl", "gg"]
Output: 6
Explanation: The longest palindrome is "clgglc"
```

## Key Idea
For a given word (i.e. "ab"), if we want to include it in a palindrome, then we must append `ba` at the other end.

If a word is `"aa"` then we can include one single word in the middle (at most one case). Otherwise it will be the same as other cases.

Thus, we can simply use a map that maps the word to a counter. Then try to append words to the palindrome.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)