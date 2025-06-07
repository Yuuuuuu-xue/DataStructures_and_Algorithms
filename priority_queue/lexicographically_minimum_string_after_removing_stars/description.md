## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3170

## Problem
You are given a string `s`. It may contains any number of `'*'` characters. Your task is to remove all `'*'` characters.

While there is a `'*'` do the following operation:
- Delete the leftmost `'*'` and the smallest non-`'*'` character to its left. If there are several smallest characters, you can delete any of them

Return the lexicographically smallest resulting string after removing all `'*'` characters.

## Example
```
Input: s = "aaba*"
Output: "aab"
```

## Key Idea
The key idea of this problem is that if we have multiple smallest character to delete, we will delete the rightmost character.

This provides a hint to use a heap to keep track of undelete character and their index. Then the top element will be the min value and rightmost index.

If there is `*`, we remove the element from heap.

At the end, we join the elements based on their index.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)