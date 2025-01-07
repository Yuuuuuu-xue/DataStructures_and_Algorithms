## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1408

## Problem
Given an array of string `words`, return all strings in `words` that is a substring of another word. You can return the answer in any order.

A substring is a contiguous sequence of characters within a string.

## Example
```
Input: words = ["mass", "as", "hero", "superhero"]
Output: ["as", "hero"]
Explanation: "as" is a substring of "mass" and "hero" is a substring of "superhero"
```

## Key Idea
We can sort the array by length and compare the shorter string with longer string to see if it is a substring.

## Complexity Analysis
- Runtime Complexity: O(n lg n + n ^ 2 * k)
  - O(n lg n) for sorting
  - O(n * n * k)
    - O(n) for looping over all shorter string
    - O(n) for looping over all longer string
    - O(k) to check if a string is a substring of another string
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
