# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 3330

## Problem
Alice is attempting to type a specific string on her computer. However, she tends to be clumsy and may press a key for too long, resulting in a character being typed multiple times.

Although Alice tried to focus on her typing, she is aware that she may still have done this at most once.

You are given a string `word`, which represents the final output displayed on Alice's screen.

Return the total number of possible original strings that Alice might have intended to type.

## Example
```
Input: word = "abbcccc"
Output: 5
Explanation: the possible strings are
- "abbcccc"
- "abbccc"
- "abbcc"
- "abbc"
- "abcccc"
```

## Key Idea
We can simply count how many times that a character repeat.

If it equals to one, then do nothing.

If more than one, it means it can be occur 1 time, ..., x times. However, if it occurs x times, then it will be the same string as other strings. Thus + x - 1 to the final output.

At the end, we plus one since no mistake counts one.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)