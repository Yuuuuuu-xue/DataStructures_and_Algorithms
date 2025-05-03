# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1007

## Problem
In a row of dominoes, `tops[i]` and `bottoms[i]` represent the top and bottom halves of `ith` domino. (A domino is a tile with two numbers from 1 to 6 - one of each half of the tile.)

We may rotate the `ith` domino, so that `tops[i]` and `bottoms[i]` swap values.

Return the minimum number of rotations so that all the values in `tops` are the same, or all the values in `bottoms` are the same.

If cannot be done, return `-1`.

## Example
```
Input: tops = [2, 1, 2, 4, 2, 2], bottoms = [5, 2, 6, 2, 3, 2]
Output: 2
```

## Key Idea
If the solution exists, it must be either the value at the top or bottom for the first dominao card.

Thus, we can store the cost for those two values:
- top_value and cost
- bottom_value and cost

If there is a card without any value, we can return False.

If there is a card without one value, we can ignore one.

Then simply find the cost, i.e. at each iteration, increment 1 if it needs a rotation.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)