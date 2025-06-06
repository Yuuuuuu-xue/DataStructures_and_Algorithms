## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
MEdium 2434

## Problem
You are given a string `s` and a robot that currently holds an empty string `t`. Apply one of the following operations until `s` and `t` are both empty:
- Remove the first character of a string `s` and give it to the robot. The robot will append this character to the string `t`
- Remove the last character of a string `t` and give it to the robot. The robot will write this character on paper.

Return the lexicographically smallest string that can be written on the paper.

## Example
```
Input: s = "zza"
Output: "azz"

Input: s = "bac"
Output: "abc"

Input: s = "bdda"
Output: "addb"
```

## Key Idea
Note, if we have the word "aababa"

First of all, we will move two "aa" to "t" and write them on the paper.

We left with "baba"

We move "b" to the "t" and then "a" to the "t". Then we move write "a" to the paper.

Left with "s" = "ba" and "t" = "b"

We repeat the process and left with "aaaabb".

This provides a hint, as long as there is a "a", we must include all "a" in the output. Now, we have some characters in `t` where we need to write to the paper and some characters in `s` where we know there is no `a`.

We can either pop a character in `t` or continue the process for `b`.

Repeat the process until we process all the characters.

If the `t` last character equals to curr min char, we pop it and write to the paper.

To know if after some index `i`, there is no such element in `s`, we can simply use a map that maps the element to its last occurrence index.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)