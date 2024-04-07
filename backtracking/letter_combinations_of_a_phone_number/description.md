## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a string containing digits from ```2-9``` inclusive, return all possible letter combinations that the number could represent. Return the answer in **any order**.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

- 2: abc
- 3: def
- 4: ghi
- 5: jkl
- 6: mno
- 7: pqrs
- 8: tuv
- 9: wxyz

## Example:
```
Input: digits = "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]

Input: digits = ""
Output: []

Input: digits = "2"
Output: ["a", "b", "c"]
```

## Key Idea
We will first create a hashmap that maps the digit to it's possible character array. Then we can simply loop each digit's character representation and backtracking. We nuse backtracking to remove the last character and try the next one.

## Solution
- [Java Solution](letter_combinations_of_a_phone_number.java)
- [C++ Solution](./solution.cpp)