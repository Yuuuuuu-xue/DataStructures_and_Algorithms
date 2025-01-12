## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2116

## Problem
A parentheses string is a non-empty string consisting only of `(` and `)`. It is valid if any of the following conditions is true:
- It is ()
- It can be written as AB (A concatenated with B) where A and B are valid parentheses strings
- It can be written as (A) where A is a valid parentheses string

You are givne a parentheses string `s` and a string `locked`, both of length `n`. `locked` is a binary string consisting only of `'0'` and `'1'`s. For each index `i` of `locked`,
- If `locked[i]` is `'1'`, you cannot change `s[i]`
- If `locked[i]` is `'0'`, you can change `s[i]` to either `'('` or `')'`.

Return `true` if you can make `s` a valid parentheses string. Otherwise return `false`.
  
## Example:
```
Input: s = "))()))", locked = "010100"
Output: true
Explanation: locked[1] == '1' and locked[3] == '1', we cannot change s[1] or s[3]. We can change s[0] and s[4] to '(' while leaving s[2] and s[5] unchanged to make s valid.
```

## Key Idea
Note, if the length of `s` is odd, we can return `false` directly because it's impossible to balance parentheses with odd length.

For each index `i`, if `locked[i]` is `0`, then we can change to either `(` or `)`. If `locked[i]` is `1` and `s[i]`
- is `)`, this means we need a `(` before it. It can be either a locked one or a non-locked one. In this case, if we have a locked ( before it, we can use it otherwise if we have unlocked before it, we can use it. If neither is possible, we can return false directly.
- is `(`, then we can update a counter

At the end, all locked `)` is handled, we need to address the leftover `(`. To achieve it, we need to store indexes of locked `(` and unlocked.

The greedy strategy is to pick the largest indedx with `)` when possible. Then at the end, if we see a locked `(` with greatest index `i` and an unlocked with greatest index `j`. If i > j, then we will return false because we don't have a corresponding `)` bracket. Thus, we will use a stack to solve this problem.

i.e `((` and locked = "01". Although we have an unlocked and locked `(`, but we cannot change index `0` to make it balanced.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
