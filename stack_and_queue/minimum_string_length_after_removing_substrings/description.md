## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Easy 2696

## Problem
You are given a string `s` consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings `"AB"` or `"CD"` from `s`.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new `"AB"` or `"CD"` substrings.

## Example
```
Input: s = "ABFCACDB"
Output: 2
Explanation:
- Remove the substring "AB", so s = "FCACDB"
- Remove the substring "CD", so s = "FCAB"
- Remove the substring "AB", so s = "FC"
```

## Key Idea
We can simply use a stack to solve this problem, if current character is `"B"` or `"D"`, then we check if top of the stack (if not empty) is `"A"` or `"C"` respectively, then we pop the item from stack. Otherwise, we push the item into stack.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)