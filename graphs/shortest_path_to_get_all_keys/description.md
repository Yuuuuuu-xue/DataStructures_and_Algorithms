## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Hard 864

## Description
You are given an `m x n` gird `grid` where:
- `'.'` is an empty cell
- `'#'` is a wall
- `'@'` is the starting point
- lowercase letters represent keys
- uppercase letters represent locks

You start at the starting point and one move consists of walking one space in one of the four cardinal directions. You cannot walk outside the grid, or walk into a wall.

If you walk over a key, you can pick it up and you cannot walk over a lock unless you have its corresponding key.

For some `1 <= k <= 6`, there is exactly one lowercase and one uppercase letter of the first `k` letters of the English alphabet in the grid. This means that there is exactly one key for each lock and one lock for each key; and also that the letters used to represent the keys and locks were chosen in the same order as the Englihs alphabet.

Return the lowest number of moves to acquire all keys. If it is impossible, return `-1`.

## Example
```
Input: grid = 
  ["@.a..",
   "###.#",
   "b.A.B"]
Output; 8
Explanation:
- Start at (0, 0)
- Move to (0, 1)
- Move to (0, 2), pick up key a
- Move to (0, 3)
- Move to (1, 3)
- Move to (2, 3)
- Move to (2, 2), use key a to unlock A
- Move to (2, 1)
- Move to (2, 0), pick up key b

Total of 8 moves and pick up all the keys

Input: grid = ["@Aa"]
Output: -1
```

## Key Idea
Note our goal is to pick all the keys and not to visit all the cells or unlock all the locks. We will first iterate over the grid and we need to
- Figure out the starting position
- Figure out the number of keys we need to get

Since we can assume that keys are first few letters (in order), thus we can use a bitmask where a bit 1 represents that we have this key. Thus, we will return True if we have all the keys.

Then simply perform a BFS where we start at the starting position. For each BFS, we will have a cell of three elements, `(i, j, bitmask)` where the first two represent the current position and last cell represents the the current key we have at this cell.

Note, we have visit a lock and we do not have the key, then after we get the key, we may visit the lock (later) again to unlock it. Thus, to avoid repeated cells, we need to store the position and also the `bitmask` as a key.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution
- [C++](solution.cpp)
