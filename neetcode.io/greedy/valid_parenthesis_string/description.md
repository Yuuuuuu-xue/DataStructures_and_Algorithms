## LeetCode Problem
Medium 678

## Description
Given a string `s` containing only three types of characters: `(`, `)`, and `*`, return `true` if `s` is valid.

The following rules define a valid string:
- Any left parenthesis `(` must have a corresponding right parenthesis `)`
- Any right parenthesis `)` must have a corresonding left parenthesis `(`
- Left parenthesis `(` must go before the corresonding right parenthesis `)`
- `*` could be treated as a single right parenthesis `)` or a single left parenthesis `(` or an empty string

## Example
```
Input: s = "()"
Output: true

Input: s = "(*)"
Output: true

Input: s = "(*))"
Output: true
```

## Basic Idea
We will solve this problem with two stacks `currLeftPar` and `currAst`. If we see a left parenthesis, we push an item to `currLeftPar` and if we see a asterisk, we push an item to `currAst`. If we see a right parenthesis:
- If `currLeftPar.size() > 0`, we pop an item and continue
- If `currAst.size() > 0`, we pop an item and continue
- Return `false` otherwise

At the end, we may have some left over open left parenthesis and some left over asterisk. Note the position matters, if we have some asterisk before left parenthesis, then it has to be empty space. Thus, we need to push the index to the stack.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)