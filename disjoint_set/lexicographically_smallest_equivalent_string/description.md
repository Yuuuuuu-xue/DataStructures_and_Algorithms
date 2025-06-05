## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1061

## Problem
You are given two strings of the same length `s1` and `s2` and a string `baseStr`.

We say `s1[i]` and `s2[i]` are equilvalent characters.
- For example, if `s1 = "abc"` and `s2 = "cde"`, then we have `'a' == 'c'`, `'b' == 'd'`, and `'c' == 'e'`.

Equilvalent characters follow the usual rules of any equilvalence relation:
- Reflexivity: `'a' == 'a'`
- Symmetry: `'a' == 'b'` implies `'b' == 'a'`
- Transitivity: `'a' == 'b'` and `'b' == 'c'` implies `'a' == 'c'`

For example, given the equivalency information from `s1 = "abc"` and `s2 = "cde"`, `"acd"` and `"aab"` are equilvalent strings of `baseStr = "eed"`, and `"aab"` is the lexicographically smallest equilvalent string of `baseStr`.

Return the lexicographically smallest equilvalent string of `baseStr` by using the equilvalency information from `s1` and `s2`.

## Example
```
Input: s1 = "parker", s2 = "morris", baseStr = "parser"
Output: "makkek"
```

## Key Idea
Not, if "a" implies "b" and "a" implies "c" and so on, it means that any characters can be mapped to any character in this group. In this case, we want the min character.

It provides a hint to use disjoint set to solve this problem where each group represents the min value that all characters are equilvalent to this character. Then we can simply loop over and find the min equilvalent character and construct the lexicographically smallest equilvalent string of baseStr.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)