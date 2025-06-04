# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3403

## Problem
You are given a string `word`, and an integer `numFriends`.

Alice is organizing a game for her `numFriends` friends. There are multiple rounds in the game, where in each round:
- `word` is split into `numFriends` non-empty strings, such that no previous round has had the exact same split
- All the split words are put into a box

Find the lexicographically largest string from the box after all the rounds are finished.

## Example
```
Input: words = "dbca", numFriends = 2
Output: "dbc"
Explanation: all possible splits are:
- "d" and "bca"
- "db" and "ca"
- "dbc" and "a"
```

## Key Idea
The key idea of this problem is that all other words must have a length of 1 and then the length of lexicographically largest string must have a length of len(words) - numFriends + 1.

Thus, we can simply find all the substrings of this length and return the largest.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)