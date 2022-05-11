## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
Given an integer ***n***, return the number of strings of length ```n``` that consist only of vowels (```a```, ```e```, ```i```, ```o```, ```u```) and are **lexicographically sorted**.

A string ```s``` is **lexicographically sorted** if for all valid ```i```, ```s[i]``` is the same as or comes before ```s[i+1]``` in the alphabet.

## Example:
```
Input: n = 1
Output: 5
Explanations: The 5 sorted strings taht consist of vowels only are ["a", "e", "i", "o", "u"].

Input: n = 2
Output: 15
Explanations: The 15 sorted strings that consist of vowels only are ["aa", "ae", "ai", "ao", "au", "ee", "ei", "eo", "eu", "ii", "io", "iu", "oo", "ou", "uu"]. Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.
```

## General Idea: 
We will use dynamic programming to solve this problem.
Let dp[i][j] be the number of strings that consist of sorted vowels only of length i + 1 and starting with ['a', 'e', 'i', 'o', 'u'][j]. Then after constructing the dp, we can simply sum the dp[n - 1][j] for all j.

But this requires O(n * 5) of length. Is there anyway to solve this problem using constant space? Let dp[i] be the number of sorted vowels strings of starting ['a', 'e', 'i', 'o', 'u'][i]. Then loop over n, for each j, we update dp[i] as dp[4] = dp[4] + 1, dp[3] = dp[3] + dp[4], dp[2] = dp[2] + dp[3], dp[1] = dp[1] + dp[2], dp[0] = dp[0] + dp[1].

## Solution
- [Java Solution](count_sorted_vowel_strings.java)