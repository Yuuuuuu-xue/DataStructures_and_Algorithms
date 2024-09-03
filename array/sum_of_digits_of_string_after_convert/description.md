# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1945

## Problem
You are given a string `s` consisting of lowercase English letters, and an integer `k`.

First, convert `s` into an integer by replacing each letter with its position in the alphabet (i.e. replacing 'a' with '1'). Then transform the integer by replacing it with the sum of its digits. Repeat the transform operation `k` times in total.

For example, if `s == "zbax"` and `k = 2`, then the resulting integer would be `9` by the following operations:
- Convert "zbax" to "(26)(2)(1)(24)" -> "262124"
- Transform 1: 262124 -> 2 + 6 + 2 + 1 + 2 + 4 = 17
- Transform 2: 17 -> 1 + 7 = 8

## Example
```
Input: s = "iiii", k = 1
Output: 36
Explanation: The operations are as follows:
- Convert "iiii" -> (9)(9)(9)(9) -> 9999
- Transform 1: 9999 -> 9 + 9 + 9 + 9 = 36
```

## Key Idea
SImply follow the instructions.

## Complexity Analysis
- Runtime Complexity: O(n * k)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)