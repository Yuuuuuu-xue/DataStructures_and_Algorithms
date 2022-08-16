## LeetCode Question
Medium 186 (Premium)

## Description
Given a character array `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in `s` will be separated by a single space.

You code must solve the problem in-place, i.e. without allocating extra space.

## Example
```
Input: s = ['t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e']
Otuput: ['b', 'l', 'u', 'e', ' ', 'i', 's', ' ', 's', 'k', 'y', ' ', 't', 'h', 'e']
```

## Key Idea
Notice if we have the string: "the sky is blue" and we reverse it, then we have: "eulb si yks eht". Then for each word, if we reverse it again, we will have "blue is sky the". Thus, this is the key idea of this question.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)