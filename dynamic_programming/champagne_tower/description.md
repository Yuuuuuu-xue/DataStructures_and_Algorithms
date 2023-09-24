## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 799

## Problem
We stack glasses in a pyramid, where the first row has `1` glass, the second row has `2` glasses, and so onuntil the 100th row. Each glass holds one cup of champagne.

Then, some champagne is poured into the first glass at the top. When the topmost glass is full, any excess liquid poured will fall equally to the glass immediately to the left and right of it. When those glasses become full, any excess champagne will fall equally to the left and right of those glasses, and so on. (A glass at the bottom row has its excess chapagne fall on the floor.)

For example, after one cup of champagne is poured, the top most glass is full. After two cups of champagne are poured, the two glasses on the second row are half full. After three cups of champagne are poured, those two cups become full - there are 3 full glasses total now. After four cups of champagne are poured, the third row has the middle glass half full, and the two outside glasses are a quarter full.

Now after pouring some non-negative integer cups of champagne, return how full the `jth` glass in the `ith` row (both `i` and `j` are 0 indexed)

## Example
```
Input: poured = 1, query_row = 1, query_glass = 1
Output: 0.0

Input: poured = 2, query_row = 1, query_glass = 1
Output: 0.5

Input: poured = 100000009, query_row = 33, query_glass = 17
Output: 1.0
```

## Key Idea
We will solve this problem via Dynamic Programming. Let `dp[(i, j)]` be the number of cups of champagne that will exceed to the next level.

Thus `dp[(i, j)] = dp[(i - 1, j - 1)] / 2 + dp[(i - 1, j)] / 2`. This is the number of cups of champagne that will flow in to this cup. Then, the flow to the next level = `max(0, dp[(i, j)] - 1)`. The cup at this level = `min(1, dp[(i, j)])`.

## Complexity Analysis
- Runtime Complexity: O(n) where n is the number of cups
- Space Complexity: O(n)

## Solution
- [C++ Solution](solution.cpp)
- [Rust Solution](./solution.rs)
