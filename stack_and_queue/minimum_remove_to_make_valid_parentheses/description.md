## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 1249

## Problem
Given a string `s` of `'('`, `')'` anmd lowercase English characters.

Your task is to remove the minimum number of parentheses (`'('`, `')'`), in any positions) so that the resulting parentheses string is valid and return any valid string.

Formally, a parentheses string is valid if and only if:
- It is the empty string, contains only lowercase characters, or
- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings, or
- It can be written as `(A)` where `A` is a valid string.

## Example
```
Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
Explanation: Other strings "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.

Input: s = ")((c)d()(l"
Output: "(c)d()l"
Explanation: Note we may need to remove the first ( and last )
```

## Key Idea
When counting parentheses with open parenthesis, we can use a stack to solve this problem. We will push an index `i` to a stack when encounter a `(`. If `s[i]` is `)` and 
- stack is not empty, then we pop it from the stack
- stack is empty, then this `)` will be removed and we can do it by setting s[i] to be empty string
  
If `s[i]` is a character, then we skip it.

At the end, all the index in the stack are invalid and extra open `(`, we join the list and skip all the `''` empty string. All the characters before those extra `(` can be also added to the output string.


## Solution
- [Python](./solution.py)