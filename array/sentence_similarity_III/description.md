# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1813

## Problem
You are given two strings `sentence1` and `sentence2`, each representing a sentence composed of words. A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of only uppercase and lowercase English characters.

Two sentences `s1` and `s2` are considered similar if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences such that the two sentences become equal. Note that the inserted sentence must be separated from existing words by spaces.

For example,
- `s1 = "Hello Jane"` and `s2 = "Hello my name is Jane"` can be made equal by inserting `"my name is"` between `"Hello"` and `"Jane"` in s1.
- `s1 = "Frog cool"` and `s2 ="Frogs are cool"` are not similar

Given two sentences `sentence1` and `sentence2`, return true if `sentence1` and `sentence2` are similar. Otherwise, return false.

## Example:
```
Input: sentence1 = "My name is Haley", sentence2 = "My Haley"
Output: true
```

## Key Idea
We can match the word with prefix and suffix. If prefix + suffix length that is greater than the short array, we can return `True` because it means we can insert some words in middle of short array to match to the long array.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)