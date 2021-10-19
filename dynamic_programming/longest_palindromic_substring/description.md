## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a string *s*, return the longest palindromic substring in *s*.

## Example
```
Input: s = "babad"
Output: "bab"

Note: "aba" is also a valid answer
```

## Key Idea 
Given a string $s = c_1c_2 \dots c_n$. In general, if we have $c_i \dots c_j$, we know it is a palindrome if and only if $c_i == c_j$ and $c_{i + 1} \dots c_{j - 1}$ is also a palindrome. 

Let OPT[i, j] denotes the longest palindrome in the substring $c_i \dots c_j$. We have the following recurrence:

OPT[i, j]
- = True if j < i, since empty string is also a palindrome
- = True if j = i, by definition of palindrome
- = True if i < j, $c_i = c_j$, and OPT[i + 1, j - 1] = True
- = False otherwise

## Solution:
- [Python Solution](longest_palindromic_substring.py)

