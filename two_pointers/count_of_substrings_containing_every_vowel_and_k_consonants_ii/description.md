# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3306

## Problem
You are given a string `word` and a non-negative integer `k`

Return the total number of substrings of `word` that contains every vowel (`'a'`, `'e'`, `'i'`, `'o'`, `'u'`) at least once and exactly `k` consonants.

## Example:
```
Input: word = "aeioqq", k = 1
Output: 0
Explanation: There is no substring with every vowel

Input: word = "aeiou", k = 0
Output: 1

Input: word = "ieaouqqieaouqq", k = 1
Output:
- word[0..5], which is "ieaouq"
- word[6..11], which is "qieaou"
- word[7..12], which is "ieaouq"
```

## Key Idea
A character is consonant if it is not a vowel. 

We can solve this problem with a sliding window where the window has all vowels and exactly k consonants.

We will first build the map that maps the index to the next index of consonant. This provides a quick way that given an index, we can simply find the next index of a consonant quickly.

For each character, we update the window. Then we start to move the window smaller if there is too many consonants in the window and make it exactly k consonants.

Then we start to move the left pointer of the window only if when both conditions are true:
- exactly k consonants
- all vowels in the window

Then all the string between index `right` and next consonant `index` are possible strings. This is because all letters between those two indices are vowel.

We keep move left index until the window is not valid and update the answer.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)