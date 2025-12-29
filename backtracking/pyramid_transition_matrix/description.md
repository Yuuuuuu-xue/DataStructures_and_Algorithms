## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
You are stacking blocks to form a pygramid. Each block has a color, which is represented by a single letter. Each row of blocks contains one less block that the row beneath it and is centered on top.

To make the pygramid aesthetically pleasing, there are only specific triangular patterns that are allowed. A triangular pattern consists of a single block stacked on top of two blocks. The patterns are given as a list of three-letter strings `allowed`, where the first two characters of a pattern represent the left and right bottom blocks respectively, and the third character is the top block.
- For example, `"ABC"` represents a triangular pattern with a `'C'` block stacked on top of an `'A'` (left) and `'B'` (right) block. Note that this is different from `"BAC"` where `'B'` is on the left bottom and `'A'` is on the right bottom.

You start with a bottom row of blocks `bottom`, given as a single string, that you must use as the base of the pyramid.

Given `bottom` and `allowed`, return `true` if you can build the pyramid all the way to the top such that every triangular pattern in the pyramid is in `allowed`, or `false` otherwise.

## Example:
```
Input: bottom = "BCD", allowed = ["BCC", "CDE", "CEA", "FFF"]
Output: true

Explanation: "A, CE, BCD"
```

## Key Idea
In allowed, we will map the two blocks to a third block on top. 

Then to solve this problem, given a list of blocks, if the length is 1, then we return true.

Then, we iterate over every pair and build the new row. Note, for every pair, it could be different options to build the next row. Repeat the process and recursive. If it doesn't work, we switch with different blocks and repeat.

## Complexity Analalysis
- Let `n` be the overall recursive calls for each recursion and `k` be the maximum depth of the recursion, the overall runtime is `O(n ^ k)`.
- Runtime Complexity: O(n^n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)