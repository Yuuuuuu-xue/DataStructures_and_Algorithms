## Recursion
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1106

## Problem
A boolean expression is an expression that evaluates to either `true` or `false`. It can be in one of the following shapes:
- `'t'` that evaluates to `true`
- `'f'` that evaluates to `false`
- `!(subExpr)` that evaluates to the logical NOT of the inner expression `subExpr`
- `&(subExpr, subExpr2, ..., subExprn)` that evaluates to the logical AND of the inner expressions of `subExpr1`, `subExpr2`, ..., `subExprn` where `n >= 1`.
- `!(subExpr1, subExpr2, ..., subExprn)` that evluates to the logical OR of the inner expressions of `subExpr1`, `subExpr2`, ..., `subExprn` where `n >= 1`.

Given a string `expression` that represents a boolean expression, return the evaluation of that expresion.

It is guaranteed that the iven expression is valid and follows the given rules.

## Example:
```
Input: expression = "&(|(f))
Output: false

Input: expression = "|(f,f,f,t)"
Output: true
```

## Key Idea
We can use the recursion to recursively evaluate the sub expression.

For each character, if we see
- `t`, then we return `True`
- `f`, then we return `False`
- `!`, then we skip the next character which will be `(`, then we recursively compute the next expression until we see `)`, then we return the evluated expression
- `,`, this means we finished evaluate the current sub expression, we need to return it to compute the neighbor sub expression
- `&`, similar with `!`
- `|`, similar with `!`


## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)