# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1461

## Problem
Given a binary string ```s``` and an integer ```k```, return ```true``` if every binary code of length ```k``` is a substring of ```s```. Otherwise, return false.

## Example
```
Input: s = "00110110", k = 2
Output: true
Explanations: The binary codes of length 2 are "00", "01", "10", and "11". They can be all found as substrings at indices 0, 1, 3, and 2 respectively.

Input: s = "0110", k = 1
Output: true
Explanations: The binary codes of length 1 are "0" and "1", it is clear that both exist as a substring.

Input: s = "0110", k = 2
Output: false
Explanation: The binary code "00" is of length 2 and does not exist in the array.
```

## Key Idea
We will use slice window to solve this problem. We will keep a window of size k and loop over the given string to obtain the substring of length k. For each substring, we add it into a hashset and at the end, checks if the length of the hashset is equal to 2 ^^ k or not.

## Java Solution
- [Java Solution](check_if_a_string_contains_all_binary_codes_of_size_k.java)