# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3085

## Problem
You are given a string `word` and an integer `k`.

We consider `word` to be k-special if `|freq(word[i]) - freq(word[j])| <= k` for all idnices `i` and `j` in the string.

Here, `freq(x)` denotes the frequency of the character `x` in `word`, and `|y|` denotes the absolute value of `y`.

Return the minimum number of characters you need to delete to make `word` k-special.

## Example
```
Input: word = "aabcaba", k = 0
Output: 3
Explanation: "abab" and delete 2a and 1c.
```

## Key Idea
First of all, we count all the frequency for the character.

Then the key idea is that for each character, we use its frequency as the base and we want to track the frequency <= k.

For each character with frequency `f`, we can iterate over all other frequencies and if frequency is less than `f`, we remove all the characters. Otherwise, we remove frequnecy until it is equal to <= `f + k`.

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)