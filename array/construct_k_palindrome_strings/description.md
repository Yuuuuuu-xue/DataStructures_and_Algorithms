# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1400

## Problem
Given a string `s` and an integer `k`, return `true` if you can use all the characters in `s` to construct `k` palindrome strings or `false` otherwise.

## Example
```
Input: s = "annabelle", k = 2
Output: true
Explanation: You can construct two pakindromes using all characters in s. Some possible constructions:
- "anna" and "elble"
- "anbna" + "elle"
- "anellena" + "b"

Input: s = "true", k = 4
Output: true
```

## Key Idea
Some observation: if k > len(s), we can return false immediately.

if k == len(s), then we can return true immediately because a single character is also a palindrome.

Now, if we have the words in "annabelle", we can construct the longest palindrome from words is "anelblena" and the minimum number of palindrome we can construct is one.

How do we know the minimum number? It is the number of characters that has an odd number of frequency. Now, after getting this number, if this number `> k`, then it is not possible to construct exact k palindromes.

If this number equals to `k`, we can return `true`.

If this number < `k`, this means we need to break some palindromes into smaller palindrome. Is this always possible? Yes, there is enough odd characters to build k palindromes.


## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)