## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1079

## Problem
You have `n` `tiles`, where each tile has one letter `tiles[i]` printed on it.

Return the number of possible non-empty seuqences of letters you can make using the letters printed on those `tiles`.

## Example:
```
Input: tiles = "AAB"
Output: 8
Explanatin: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA"
```

## Key Idea
This looks for the permutation, we can use a backtracking to solve this problem. We will use a hashmap to represent the frequency.

## Complexity Analysis
- Runtime Complexity:
  - The depth of the recursive call is O(n) = len(tiles)
  - The number of recursive calls is O(m) = len(unique characters in tiles)
  - Runtime Complexity: O(m^n)
- Space Complexity:

## Solution
- [Python](solution.py)