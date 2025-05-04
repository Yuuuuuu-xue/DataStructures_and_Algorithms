## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1128

## Problem
Given a list of `dominoes`, `dominoes[i] = [a, b]` is equivalent to `dominoes[j] = [c, d]` if and only if either (`a == c` and `b == d`), or (`a == d` and `b == c`) - that is, one domino can be rotated to be equal to another domino.

Return the number of pairs `(i , j)` for which `0 <= i < j < dominoes.length`, and `dominoes[i]` is equivalent to `dominoes[j]`.

## Example
```
Input: dominoes = [[1, 2], [1, 2], [1, 1], [1, 2], [2, 2]]
Output: 3
```

## Key Idea
We can use a map that maps the domino to a counter. To know two dominoes are equilvalent, we can simply put the smaller value at the top.

At the end, simply loop over and if the counter > 1, we can simply use the formula (k * (k - 1)) / 2 to find the number of pairs.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)