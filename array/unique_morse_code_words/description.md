# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 804

## Problem
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashses, as follows:
- `a` maps to `.-`
- `b` maps to `-...`
- `c` maps to `-.-.`
- `d` maps to `-..`
- `e` maps to `.`
- `f` maps to `..-.`
- `g` maps to `--.`
- `h` maps to `....`
- `i` maps to `..`
- `j` maps to `.---`
- `k` maps to `-.-`
- `l` maps to `.-..`
- `m` maps to `--`
- `n` maps to `-.`
- `o` maps to `---`
- `p` maps to `.--.`
- `q` maps to `--.-`
- `r` maps to `.-.`
- `s` maps to `...`
- `t` maps to `-`
- `u` maps to `..-`
- `v` maps to `...-`
- `w` maps to `.--`
- `x` maps to `-..-`
- `y` maps to `-.--`
- `z` maps to `--..`

Given an array of strings `words` where each word can be written as a concatenation of the Morse code of each letter. For example, `cab` can be written as `-.-..--...` which is concatentation of `-.-.`, `.-`, and `-...`. We will callsuch a concatenation the transformatin of a word.

Return the number of different transformations among all words we have.

## Example
```
Words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: The transformation of each word is:
- "gin" -> "--...-."
- "zen" -> "--...-."
- "gig" -> "--...--."
- "msg" -> "--...--."
```

## Key Idea
Simply encode each string and then put it in a set. At the end, the size of the set is the number of different transformation among all words we have.

## Complexity Analysis
- Runtime Complexity is O(n * m) where n is the size of the list and m is the maximum length of each word
- Space Complexity is O(n)

## Solution
- [C++](solution.cpp)