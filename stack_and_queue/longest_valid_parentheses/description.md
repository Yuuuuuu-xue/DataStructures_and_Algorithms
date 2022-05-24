## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Description
Given a String containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

## Example
```
Input: s = "(()"
Output: 2
Explanations: The longest valid parentheses substring is "()"

Input: s = ")()())"
Output: 4
Explanations: The longest valid parentheses substring is "()()".
```

## Key Idea
We will use stack to solve this problem. If current character is '(', then we push the index to the stack. If current character is ')' and the top of the stack is '(', then we found a match pair and pop it from the stack. If not, then we push the index of ')' to the stack. After the iterations, we have a list of index that is not possible and we just need to find the largest possible substrings between indicies.

## Solution
- [Java Solution](longest_valid_parentheses.java)