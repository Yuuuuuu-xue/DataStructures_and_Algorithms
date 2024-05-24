## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1255

## Problem
Given a list of `words`, list of single `letters` (might be repeating) and `score` of every character.

Return the maximum score of any valid set of words formed by using the given letter (`words[i]` cannot be used two or more times).

It is not necessary to use all characters in `letters` and each letter can only be used once. Score of letters `'a'`, `'b'`, `'c'`, .., `'z'` is given by `score[0]`, `score[1]`, ..., `score[25]` respectively.

## Example:
```
Input: words = ["dog", "cat", "dad", "good"], letters = ["a", "a", "c", "d", "d", "d", "g", "o", "o"], score = [1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
Output: 23
Explanation: Score a = 1, c = 9, d = 5, g = 3, o = 2
Given letters, we can form the words "dad" (5 + 1 + 5) and "good" (3 + 2 + 2 + 5) with a score of 23.
```

## Key Idea
For each word in `words` at index `i`, we loop over `i` to the end of the index and try to use the `words[i]` and update the score. If we can use remaining characters to form this word. If it is valid, then we can recurisvely build the array by calling the function with `i + 1`, then backtrack.

To check if we can use remaining characters, we can build a counter array, and update. When a counter `< 0`, then it's not a valid.

## Complexity Analysis
- Runtime Complexity: The maximum depth will be the `n = len(words)`. At each recursive call, there will be at most `n = len(words)`. Thus it's bounded by `O(n^n)`
- Space Complexity: O(n^n)

## Solution
- [Python](solution.py)