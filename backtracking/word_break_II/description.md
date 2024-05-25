## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 140

## Problem
Given a string `s` and a dictionary of strings `wordDict`, add spaces in `s` to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order.

Note taht the same word is in the dictionary may be reused multiple times in the segmentation.

## Examples
```
Input: s = "catsanddog", wordDict = ["cat", "cats", "and", "sand", "dog"]
Output: ["cats and dog", "cat sand dog"]
```

## Key Idea
First of all, we can convert `wordDict` into a hash set. Then given an index `i`, we can try to loop over `i` and build the curr string. If `curr` is in the `wordSet`, then we can append it to the current list and recursively call it.

Then, we backtrack and build a longer word. Note, we cannot skip over a character.

## Complexity Analysis
- Runtime Complexity: O(n ^ n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)