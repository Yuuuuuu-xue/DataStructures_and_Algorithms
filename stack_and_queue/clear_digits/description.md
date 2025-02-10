## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3174

## Problem
You are given a string `s`.

Your task is to remove all digits by doing this operation repeatedly:
- Delete the first digit and the closest non-digit character to its left

Return the resulting string after removing all digits.

## Example
```
Input: s = "abc"
Output: "abc"

Input: s = "cb34"
Output: ""
Explanation:
- Remove 3 and b, left with "c4"
- Remove 4 and c, left with ""
```

## Key Idea
We can simply use a stack, when we see a character, we push to a stack. When we see a number, we pop a character from stack.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n) 

## Solution
- [Python](./solution.py)