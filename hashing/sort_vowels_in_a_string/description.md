## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2785

## Question
Given a 0-indexed string `s`, permute `s` to get a new string `t` such that:
- All constants remain in their original places. More formally, if there is an index `i` with `0 <= i < s.length` such that `s[i]` is a constant, then `t[i] = s[i]`
- The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices `i`, `j` with `0 <= i < j < s.length` such taht `s[i]` and `s[j]` are vowels, then `t[i]` must not have a higher ASCII value than `t[j]`.

Return the resulting string.

The vowels are `'a'`, `'e'`, `'i'`, `'o'` and `'u'`, and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.

## Example
```
Input: s = "lEetcOde"
Otuput: "lEotcede"

Input: s = "lYmpH"
Output: "lYmpH"
```

## Key Idea
Let `m` be a map that maps the vowels to the number of occurrence.

Then simply traverse the vowels again, if the letter is a vowel, then simply replace it with the smallest vowel. We can do it simply let a pointer points to the smallest vowel and we know how many of them we can replace with the `m`. If occurrence is 0, then we move to the next smallest vowel.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)