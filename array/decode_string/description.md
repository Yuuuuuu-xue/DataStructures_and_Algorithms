# DataStructures_and_Algorithms
Click [here](../../README.md) to main page


## Problem
Given an encoded string, return its decoded string. The encoding rule is `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are `well-formed`, etc. Furthermore, you may assume htat the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there will not be input like `3a` or `2[4]`.

The test cases are generated so that the length of the output will never exceed `10^5`.

## Example
```
Input: s = "3[a]2[bc]"
Output: "aaabcbc"

Input: S = "3[a2[c]]"
Output: "accaccacc"
```

## Key Idea
Notice for the second example, when we process `3[a`, then it depends on the later characters, thus we can use a recursion to solve this question. For each recursion, it will modify the next starting index of the next encoding rule. For given string `s`, let `currNum` be the current number of strings repeated (the numbers before `[`), then we perform a recursion after `[`, then concatenate the strings, repeat the same process until we react `]`, then repeat the concatenated string `currNum` times. The base case of the recursion will just be plain lower case letter, so we can check the first character to determine if only contains lower case letters or in the format `num[encoded_string]`.

## Solution
- [C++](solution.cpp)