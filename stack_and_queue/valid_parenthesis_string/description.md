## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 678

## Problem
Given a string `s` containing only three types of characters: `(`, `)`, and `*`, return `true` if `s` is valid.

The following rules define a valid string:
- Any left parenthesis `(` must have a corresponding right parenthesis `)`
- Any right parenthesis `)` must have a corresponding left parenthesis `(`
- Left parenthesis `(` must go before the correspodning right parenthesis `)`
- `*` could be treated as a single right parenthesis `)` or a single left parenthesis `(` or an empty string `""`

## Example
```
Input: s = "()"
Output: true

Input: s = "(*)"
Output: true

Input: s = "(*))"
Output: true
```

## Key Idea
When to ask for valid parenthesis, we usually use a stack to solve this problem. Since this problem does not need to keep track position of each `(`, we can use a counter to keep track `counter` left. Then if we encounter a
- `(`, we increment this counter
- `)`, we decrement this counter. If counter is `0` and `num_art` == 0, then we can return false immediately.
- `*`, we increment the `num_art` by 1

At the end, if `counter > 0`, this means we have some extra open `(`, then if `counter <= num-art`, then we can return `true` otherwise `false`.

However, this approach doesn't work. Consider if we have an open `*` before `(`, then we cannot use `*` to repalce `(` and thus we need to skip it.

So, in this case, we cannot use a counter but instead using a counter.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)